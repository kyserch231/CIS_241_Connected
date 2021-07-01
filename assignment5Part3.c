#include <stdio.h>
#include <stdarg.h>

double avg3(int n, ...){
	va_list mylist;
	va_start(mylist,n);
	double tmp=va_arg(mylist,int)+0.0;
	double len = 1.0;
	for(int i=1; i<n; i++){
		tmp += va_arg(mylist,int);
		len+=1.0;
	}
	va_end(mylist);
	tmp = tmp/len;
	return tmp;

}

int main(){
	double result = avg3(3,4,0,0);
	printf("The average value is %g\n",result);
	return 0;
}
