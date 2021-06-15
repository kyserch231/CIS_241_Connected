#include <stdio.h>

double R(double* kwh);
double S(double* kwhPeak, double* kwhOffPeak);
int checkNum(double* pkWh);
int checkNumS(double* pkWhPeak, double* pkWhOffPeak);

int main(){
	int i=1;
	char in;
	double kwh, kwhPeak, kwhOffPeak;
	double owedS, owedR;

	while(i){
		printf("\nEnter an operation code: ");
		scanf("%c",&in);
	
		switch(in){
			case 'Q':
			case 'q':
				i=0;
				break;
			case 'C':
			case 'c':
				if(checkNumS(&kwhPeak,&kwhOffPeak)){
                                        owedS = S(&kwhPeak, &kwhOffPeak);
                                }
				if(owedS == 0){
					break;
				}
				kwh = kwhPeak +  kwhOffPeak;
				owedR = R(&kwh);
				double perc;

				if(owedS<owedR){
					perc = (owedR/owedS)*100 -100;
					printf("\nYou should calculate the electric bill using the residential summer on-peak basic rate.");
					printf("\nIf you don't you will pay %%%.0lf more using the residential service non-transmitting meter rate.",perc);
				}
				else{
					perc = (owedS/owedR)*100 -100;
					printf("\nYou should calculate the electric bill using the residential service non-transmitting meter rate.");
					printf("\nIf you don't you will pay %%%.0lf more using the residential summer on-peak basic rate.",perc);
				}
				break;
			case 'S':
			case 's':
				if(checkNumS(&kwhPeak,&kwhOffPeak)){
					S(&kwhPeak, &kwhOffPeak);
				}
				break;
 			case 'R':
			case 'r':
				if(checkNum(&kwh)){
					R(&kwh);
				}
				break;
			default:
				printf("\nError: Invalid Operation Code");

		}
		fflush(stdin);
	}
	return 0;
}

double R(double* kwh){
	double owed;

	if(*kwh <= 600.0){
		owed = *kwh * 0.105179;
	}
	else{
		int temp = *kwh - 600;
		owed = (600 * 0.105179) + (temp * 0.129468);
	}
	owed += (*kwh * 0.055826) + 8.0;
	printf("\nThe amount owed calculated using the residential service non-transmitting meter rate is $%.2lf.", owed);
	return owed;
}

double S(double* kwhPeak,double* kwhOffPeak){
	double owed;
        owed = (0.149656 * *kwhPeak) + (0.100649 * *kwhOffPeak) + 8 + (0.055826 * (*kwhPeak + *kwhOffPeak));
        printf("\nThe amount owed calculated using residential summer on-peak basic rate is $%.2lf.", owed);
        return owed;
}

int checkNum(double* pkWh){
	char enter;
	printf("\nEnter the number of kWh found on your meter: ");
	if(scanf("%lf", pkWh) == 1){
		scanf("%c", &enter);
		if(enter != '\n'){
			fflush(stdin);
			printf("\nError: Invalid Entry. Enter only a number.");
			return 0;
		}
		return 1;
	}
	else{
		fflush(stdin);
		printf("\nError: Invalid Entry. Enter only a number.");
		return 0;
	}
}
int checkNumS(double* pkWhPeak, double* pkWhOffPeak){
        char enter;
        printf("\nEnter the number of peak kWh found on your meter: ");
        if(scanf("%lf", pkWhPeak) == 1){
                scanf("%c", &enter);
                if(enter != '\n'){
                        fflush(stdin);
                        printf("\nError: Invalid Entry. Enter only a number.");
                        return 0;
                }
        	printf("\nEnter the number of off-peak kWh found on your meter: ");
		if(scanf("%lf", pkWhOffPeak) == 1){
                	scanf("%c", &enter);
               		if(enter != '\n'){    
                        	fflush(stdin);
                        	printf("\nError: Invalid Entry. Enter only a number.");
                       		return 0;
                	}
		}
		else{
			fflush(stdin);
                       	printf("\nError: Invalid Entry. Enter only a number.");
                   	return 0;
		}
        	
		return 1;
	}
        else{
		fflush(stdin);
                printf("\nError: Invalid Entry. Enter only a number.");
                return 0;
        }
}
