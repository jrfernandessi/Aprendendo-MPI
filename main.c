#include "mpi.h"
#include <stdio.h>

int main(argc, argv)
    int argc;
    char **argv;
{
    int rank, nprocs;
    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &nprocs);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    printf("Hello, World!\n");
    MPI_Finalize();
    return 0;
}