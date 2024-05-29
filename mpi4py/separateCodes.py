#separateCodes: use rank to give diff instructions to each process
#in a communicator 

from mpi4py import MPI 
comm = MPI.COMM_WORLD #The default communicator
rank = comm.Get_rank()
size = comm.Get_size()
print("MPI.COMM_WORLD has", size, "processes")

a = 6.0 
b = 3.0 

if rank == 0: 
    print("P0:", a + b) #Python concat with comma will add 1 space
if rank == 1: 
    print("P1:", a * b) 
if rank == 2: 
    print("P2:", max(a, b))


