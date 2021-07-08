#include <stdio.h>
#include <complex.h>

int main(){
	double cReal,cImag;
	double complex cN,temp;
	int i,n;
	printf("\nEnter a complex number c: ");
	scanf("%lf%*c%lf%*c",&cReal,&cImag);
	printf("\nEnter an integer n: ");
	scanf("%d",&n);
	cN = cReal+cImag*I;
	temp = cN;
	for(i=1;i<n;i++){
		cReal*=creal(cN);
		cReal-=i*(cimag(cN)*cimag(cN));
		cImag*=(2*creal(cN));
	}
	cN = cReal+cImag*I;
	printf("\nc^n = %.2lf+%.2lfi",creal(cN),cimag(cN));

	return 0;
}
