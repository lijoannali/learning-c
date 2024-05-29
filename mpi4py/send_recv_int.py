from mpi4py import MPI
import numpy 

comm = MPI.COMM_WORLD 
rank = comm.Get_rank()

if rank == 0: 
	idata = 55
	comm.send(idata, dest=1)
elif rank == 1: 
	idata = comm.recv(source=0) 
	print("On process ", rank, " the data is ", idata)
