#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>

#define N 100       // Number of points in the rod
#define TIMESTEPS 500  // Number of time steps
#define LEFT_TEMP 100.0 // Left boundary temperature
#define RIGHT_TEMP 50.0 // Right boundary temperature

int main(int argc, char** argv) {
    int rank, size;
    double u[N], u_new[N];  // Temperature arrays
    int start, end;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    int chunk = N / size; // Partition the rod into chunks
    st
