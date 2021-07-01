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
	while(fscanf(inFile, " %1024s", buffer)==1) {
		++i;
	    	printf("%d: %s\n", i, buffer);
	}
	fclose(inFile);
	return 0;
}
