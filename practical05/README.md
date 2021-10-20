This folder contains completed C and Fortran code for the Week 5 practical.

The fibonacci files return the first n fibonacci series values. The arctan files calculate arctanh(x) using the maclaurin series and the natural logarithm.

Run fibonacci_soln.c and arctan_soln.c
```
gcc -o fibonacci_soln_c fibonacci_soln.c 
./fibonacci_soln_c
gcc -o arctan_soln_c arctan_soln.c -lm
./arctan_soln_c
```

Run fibonacci.f90 and arctan_soln.f90
```
gfortran -o fibonacci_f fibonacci.f90 
./fibonacci_f
gfortran -o arctan_soln_f arctan_soln.f90
./arctan_soln_f
```
