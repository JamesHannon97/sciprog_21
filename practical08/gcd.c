/*
 * Itrerative and Recursive version of Euclid's Algorithm
 *  to calculate the gcd of two positive integers
 */
#include <stdio.h>

// Declare and Define Functions
// Returns GCD via iterative version of Euclid's algorithm
int iterativeGCD(int a, int b)  {
  int temp;
  while (b != 0)  {
    temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

// Returns GCD via recursive version of Euclid's algorithm
int recursiveGCD(int a, int b)  {
  if (b == 0)  {
    return a;
  } else  {
    return recursiveGCD(b, a % b);
  }
}

int main(void)  {
  int a, b, error;

  printf("Please input two positive integers\n");
  error = scanf("%d %d", &a, &b);

  // Check if 2 integers given
  if (error != 2)  {
    printf("Please try again\n");
    return 1;
  }  

  // Check if integers are positive
  if (a<=0 || b<=0)  {
    printf("These numbers are not positive!\n");
    return 1;
  }

  // Call Functions
  printf("Iterative GCD(%d, %d) = %d\n", a, b, iterativeGCD(a, b));
  printf("Recursive GCD(%d, %d) = %d\n", a, b, recursiveGCD(a, b));
 
  return 0;
}
