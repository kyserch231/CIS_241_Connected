#include <stdio.h>

double average3(int a, int b, int c);

int main(){
	int a = 4, b = 0, c = 0;
	printf("the average of %d, %d, %d is %.2lf\n",a,b,c,average3(a,b,c));
	a = 6;
       	b = 3; 
	c = 99;
	printf("the average of %d, %d, %d is %.2lf\n",a,b,c,average3(a,b,c));
	a = 865694;
       	b = 10456; 
	c = 6854;
	printf("the average of %d, %d, %d is %.2lf\n",a,b,c,average3(a,b,c));
	a = 4; 
	b = 4; 
	c = 4;
	printf("the average of %d, %d, %d is %.2lf\n",a,b,c,average3(a,b,c));
	return 0;

}

double average3(int a, int b, int c){
	double temp = 0;
	temp = (a+b+c)/3.0;
	return temp;
}
