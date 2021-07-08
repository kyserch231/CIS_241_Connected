#include <stdio.h>

int main(){
	int a = 0,b =0;
	printf("\nEnter an integer: ");
	scanf("%d",&a);
	printf("\nEnter another integer: ");
	scanf("%d",&b);
	if(a<b){
		printf("\nThe min is %d",a);
	}
	else if(a>b){
		printf("\nThe min is %d",b);
	}
	else printf("\nThe min is %d", a);

	return 0;
}
