#include <mpi.h>
#include <stdio.h>
int main(int argc, char *argv) { 
    int rank, size; 
    MPI_Init(&argc, &argv); //starts MPI part
    MPI_Comm_rank(MPI_COMM_WORLD, &rank); //retrieves rank of current communicator, saves to &rank
    MPI_Comm_rank(MPI_COMM_WORLD, &size); //same but for size 
    printf("Hello world! I'm %d of %d\n", rank, size); 
    MPI_Finalize(); //close MPI part
    return 0; 
}