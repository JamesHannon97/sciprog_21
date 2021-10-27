This folder contains completed C and Fortran code for the Week 6 practical.

### C code

First run matmult.c:

```
gcc -o matmult_c matmult.c
./matmult_c
```

Next, change to folder Step6 and execute the following steps:

```
cd Step6
gcc -c mm.c
gcc -c main.c
gcc -o mmc main.o mm.o
./mmc
```

Finally, we use MakeFile:

```
make -f MakeFile clean
make -f MakeFile all
```

### Fortran code

First run matmult.f90:

```
gfortran -o matmult_f matmult.f90
./matmult_f
```

Next, change to folder Step6 and execute the following steps:

```
cd Step6
gfortran -c mm.f90
gfortran -c main.f90
gfortran -o mmf main.o mm.o
./mmf
```

Finally, we use MakeFilef:

```
make -f MakeFilef clean
make -f MakeFilef all
```
