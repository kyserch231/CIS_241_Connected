#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <tgmath.h>

int main(){
	double complex c,cN;
	double cImag,cReal;
	int n;
	printf("Enter a complex number\n");
	scanf("%lf%*c%lf",&cReal,&cImag);
	c = cReal+cImag*I;
	printf("complex is %f+%fi\n",creal(c),cimag(c));
	printf("Enter an integer\n");
	scanf("%d",&n);
	cN=cpow(c,n);
}
