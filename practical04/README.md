This folder contains completed C and Fortran code for the Week 4 practical.

Run tan.c:

```
gcc -o tan_c tan.c -lm
./tan_c
```

Run tan.f90:

```
gfortran -o tan_f tan.f90
./tan_f
```

The files calculate and print tan(x), where x is radians in the range [0, 60] every five degrees, in main. One function (subroutine) converts degrees to radians. The other function (subroutine) calculates the area under the curve of tan(x) from 0 to 60 degrees using the trapezoidal rule, taking the number of points as an argument. 

