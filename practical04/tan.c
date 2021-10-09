#include <stdio.h>
#include <math.h>
#define N 12
float pi=M_PI, degtorad (float arg), tan_array[N+1], area (float arg);

float degtorad(float arg)  {
  return( (pi * arg)/180.0);
}

float area(float arg)  {
  int i;
  float a=0.0, b_deg=60.0, b_rad, delta, integral;
  b_rad=degtorad(b_deg);
  delta=(b_rad-a)/arg;
  integral = tanf(a) + tanf(b_rad);
  for (i=1; i<arg; i++)  {
    integral += 2 * tanf(i*delta);
  }
  integral *= (b_rad-a)/(2*arg);
  printf("Integral of tan(x) from 0 to pi/3 using trapezoidal rule and %d equidistant points = %f\n",N+1,integral);
  return integral;
}

int main() {
  int i;
  float deg, rad;
  for (i=0; i<=N; i++)  {
    deg=5.0*i;
    rad=degtorad(deg);
    tan_array[i]=tanf(rad);
    printf("tan(%f) = %f\n",rad,tan_array[i]);
  }
  area(N);
  return 0;
}
