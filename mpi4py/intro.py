from mpi4py import MPI
#Code below is sent to all processes, they all run it but distinguished by rank
comm = MPI.COMM_WORLD #default = all processes 0 to n-1
rank = comm.Get_rank() #retrieves the rank
print('Current rank is: ', rank)

