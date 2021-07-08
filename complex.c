#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <tgmath.h>

int main(){
	double complex c,cN;
	double cImag,cReal;
	int n;
	printf("Enter a complex number c=\n");
	scanf("%lf%*c%lf%*c",&cReal,&cImag);
	c = cReal+cImag*I;
	printf("Enter an integer\n");
	scanf("%d",&n);
	cN = cpow(creal(c)+cimag(c)*I,n);
	printf("c^n = %.2lf+%.3lfi\n",creal(cN),cimag(cN));
	return 0;
}
