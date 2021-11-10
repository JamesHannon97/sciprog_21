This folder contains completed C and Fortran code for the Week 7 practical.

During this practical we used the Maclaurin series to approximate the exponential function (see polynomial files) and used dynamic memory allocation (see mem_alloc).

### C code

Run polynomial.c and mem_alloc.c:

```
gcc -o poly_c polynomial.c -lm
./poly_c
gcc -o mem_alloc_c mem_alloc.c
./mem_alloc_c
```

### Fortran code

Run polynomial.f90 and mem_alloc.f90:

```
gfortran -o polynomial_f polynomial.f90
./polynomial_f
gfortran -o mem_alloc_f mem_alloc.f90
./mem_alloc_f
```

