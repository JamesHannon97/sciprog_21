This folder contains completed C and Fortran code for the Week 9 practical.

During this tutorial we implemented a function that determines whether a matrix is square or not, using header files.
Header files end in '.h' in C and '.fh' in Fortran.
 An example of a square matrix can be found in magic_square.txt and an example of a matrix that is not magic can be found in not_magic_square.txt.
There are 2 files in both languages, one asks the user to input a matrix, while the other reads in a matrix from a file.

### C code

Run magic_sq_input.c and magic_sq_file.c:

```
gcc -o magic_sq_input_c magic_sq_input.c
./magic_sq_input_c
gcc -o magic_sq_file_c magic_sq_file.c
./magic_sq_file_c
```

### Fortran code

Run magic_sq_input.f90 and magic_sq_file.f90:

```
gfortran -o magic_sq_input_f magic_sq_input.f90
./magic_sq_input_f
gfortran -o magic_sq_file_f magic_sq_file.f90
./magic_sq_file_f
```
