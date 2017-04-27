#!/bin/bash -l
#$ -N dinodigging -wd $HOME/dinodigging -pe mpislots 8 -o $HOME/dinodigging/output.$JOB_NAME.$JOB_ID
module load mpi/openmpi/1.10.2/gcc-4.8.5
cd $HOME/dinodigging
mpirun dinodigging
