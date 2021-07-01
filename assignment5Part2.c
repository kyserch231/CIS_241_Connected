#include <stdio.h>

#define avg3(a,b,c) ((a)+(b)+(c))/3.0

int main(){
	printf("%g\n",avg3(5,6,7+5));
	printf("%g\n",avg3(5,6,12));
	printf("%g\n",avg3(5,6,2));
	printf("%g\n",avg3(5,0,0));
	printf("%g\n",avg3(5,6,0));
	printf("%g\n",avg3(5,6,378645));
	return 0;
}
