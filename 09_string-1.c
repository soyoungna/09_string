#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fp = NULL;
	char str[100];
	char c;
	int i;
	
	fp =fopen("sample.txt","r");
	
    /*while((c=fgetc(fp))!=EOF)
    {
    	putchar(c);
    
	}
    */
     while(fgets(str,100,fp)!=NULL)
    {
         printf(str);
     }
    
	fclose(fp); 
	
	return 0;
}
