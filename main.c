#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "mpi.h"

int main(int argc, char **argv)
{
    char message[20];
    int i, rank, size, type=99;
    MPI_Status status;
    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    if (rank == 0) {
//        printf("enviando\n");
        strcpy(message, "Hello, World");
        for (i = 0; i < size; i++)
            MPI_Send(message, 13, MPI_CHAR, i, type, MPI_COMM_WORLD);
        printf("enviado");
    }else{
//        printf("recebendo\n");
        MPI_Recv(message, 13, MPI_CHAR, 0, type, MPI_COMM_WORLD, &status);
        printf("recebido");
    }
//    printf("imprimir mensagem\n");
    printf("Message from node=%d: %.13s\n ", rank, message);
    MPI_Finalize();
    return 0;
}