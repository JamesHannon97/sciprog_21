#include <stdio.h>
#include <math.h>

int main(void) {
/* Declare variables */
	float integral_sum,a,b,delta;
	int i,n;

/* Intialise 4-byte floats */	
	a = 0.0;
	b = M_PI/3.0;
	n = 12;
	delta = (b-a)/n;
	
	integral_sum = tan(a) + tan(b);
	for (i=1; i<n; i++) {
		integral_sum = integral_sum + 2 * tan(i * delta);
	}
	integral_sum = integral_sum * (b-a) / (2*n);
	printf("Integral of tan(x) from 0 to pi/3 using trapezoidal rule and 11 equidistant points = %f\n",integral_sum);
	printf("Log(2) = %f\n",logf(2.0));
}
