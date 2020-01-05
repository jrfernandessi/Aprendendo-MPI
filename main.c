#include "mpi.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(int argc, char **argv)
{
    //rank is the proccess id and nprocs is numbers of procces
    int rank, nprocs;
    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &nprocs);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
//    printf("%d\n", nprocs);
//    printf("%d\n", rank);
    printf("Hello, World!\n");
    MPI_Finalize();
    return 0;
}