#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fp1=NULL;
	FILE *fp2=NULL;
    char input;
    char original[100];
    char copy[100];
    int i=0;
    
    printf("original file : ");
    scanf("%s",original);
    printf("copy file : ");
    scanf("%s", copy);
    
    fp1= fopen(original,"r");
    fp2= fopen(copy,"w");
    
    while((input = fgetc(fp1))!=EOF)
    {
    	fputc(input, fp2);
    	i++;
	}
	
	printf("copy succeed~(%i Bytes copied)\n",i);
	fclose(fp1);
	fclose(fp2);
	return 0;
}
