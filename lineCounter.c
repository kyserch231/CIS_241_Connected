#include <stdio.h>

int main(){
	int bufferLength = 255, i = 0;
	char f[bufferLength];
	char buffer[bufferLength];
	printf("Enter a file name\n");
	scanf("%s",f);
	FILE *inFile = fopen(f,"r");
	if(inFile == NULL){
		perror("Could not open file: ");
	}
	while(fgets(buffer, bufferLength, inFile)) {
		++i;
	    	printf("%d: %s", i, buffer);
	}
	fclose(inFile);
	return 0;
}
