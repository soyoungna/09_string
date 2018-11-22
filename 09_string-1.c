#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fp1=NULL;
	
    char input[100];
    char word[100];
    char filename[100];
    char find[100];
    
    
    printf( "file name : ");
    scanf("%s",filename);
    
    fp1= fopen(filename,"r");
    
    printf("word to find : ");
    scanf("%s",word);
    
    
    while(fgets(input,100,fp1)!=NULL)
	{
		if (strncmp(input,word,strlen(word))==0)
		{
			printf("find a word %s",input);
		}
		
	}
    
	
	
	fclose(fp1);
	
	return 0;
}
