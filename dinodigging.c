/* exercise 1.1
 *
 * helloworld C Example */

#include <stdio.h>
#include <mpi.h>


int main (int argc, char **argv)
{
  int rank, size, name_len;
  char processor_name[MPI_MAX_PROCESSOR_NAME];

  MPI_Init (&argc, &argv);	/* starts MPI */
  MPI_Comm_rank (MPI_COMM_WORLD, &rank);	/* get current process id */
  MPI_Comm_size (MPI_COMM_WORLD, &size);	/* get number of processes */
  MPI_Get_processor_name(processor_name, &name_len);
  printf( "dino digging from process %d of %d (processor %s)\n", rank, size, processor_name );
  printf( "%d\n", 16+25 );
  MPI_Finalize();
  return 0;
}
