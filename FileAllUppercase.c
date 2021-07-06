#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
	int bufferLength = 255, i = 0;
        char f[bufferLength],fout[]=".allUpper";
        char buffer;
        printf("Enter a file name\n");
        scanf("%s",f);
        FILE *inFile = fopen(f,"r");
        if(inFile == NULL){
                perror("Could not open in file: ");
        }
	FILE *outFile = fopen(fout,"w");
	if(outFile == NULL){
		perror("Could not open out file: ");
	}
        while(fscanf(inFile,"%c", &buffer)==1) {
                fputc(toupper(buffer), outFile);
        }
	fclose(outFile);
        fclose(inFile);
	
	FILE *inF = fopen(fout,"r");
        if(inF == NULL){
                perror("Could not open in file: ");
        }
        FILE *outF = fopen(f,"w");
        if(outF == NULL){
                perror("Could not open out file: ");
        }
        while(fscanf(inF,"%c", &buffer)==1) {
                fputc(buffer, outF);
        }
        fclose(outF);
        fclose(inF);	
	return 0;
}
