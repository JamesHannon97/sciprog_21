#include <stdio.h>
#include <stdlib.h>

// Takes an integer as an argument and returns a pointer to an allocated memory block of that many integers. 
int* allocatearray(int n)  {
  int* array;
  array = (int*) malloc(n * sizeof(int));
  printf("Array of size %d allocated. \n", n);
  return array;
}

// Takes a pointer to an array of integers and fills every cell of the array with a one
void fillwithones(int* array, int n)  {
  int i;
  for(i = 0; i < n; i++)  
    array[i] = 1;
}

// Takes a pointer to an array of integers and prints its elements on screen.
void printarray(int *array, int n)  {
  int i;
  for(i = 0; i < n; i++)
    printf("%d ", array[i]);
  printf("\n");
}

// Frees the allocated memory.
void freearray(int* array)  {
  free(array);
  printf("Array freed!\n");
}

// Calls all the functions above
int main()  {

  int n;
  int* array_main;

  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  array_main = allocatearray(n);
  fillwithones(array_main, n);
  printarray(array_main, n);
  freearray(array_main);
  array_main = NULL;

  return 0;
}
