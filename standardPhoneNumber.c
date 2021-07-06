#include <stdio.h>

int main(){
	int len = 255, num1, num2, num3;
	char snum[len];
	printf("Enter a phone number: ");
	scanf("%[^\n]%*c",snum);
	int n = sscanf(snum," ( %3d ) %3d - %4d ",&num1,&num2,&num3);
	if(n!=3){
		n = sscanf(snum," %3d - %3d - %4d ",&num1,&num2,&num3);
		if(n!=3){
			n = sscanf(snum," %3d . %3d . %4d ",&num1,&num2,&num3);
			if(n!=3){
				n = sscanf(snum," %3d %3d %4d ",&num1,&num2,&num3);
				if(n!=3){
					n = sscanf(snum," %3d%3d%4d ",&num1,&num2,&num3);
                                	if(n!=3){
                                        	n = sscanf(snum," ( %3d ) %3d %4d ",&num1,&num2,&num3);
                                	}
				}
			}
		}
	}
	else if(n!=3){
		printf("Could not read the number\n");
	}
	printf("(%03d)-%03d-%04d\n",num1,num2,num3);
	return 0;
}
