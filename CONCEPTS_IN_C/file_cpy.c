#include<stdio.h>

int main()
{
	char* PATH[100];
	FILE *fp1,*fp2;
/*	printf("\nENTER The PATH of SOURCE FILE: "); */
/*	scanf("%s",PATH); */
	
	fp1 = fopen(PATH,"r");
	fp2 = fopen("C:/Users/Arna/Desktop/cpy.txt","w");
	
	if(fp1==NULL)
	  perror("\nERROR OPENING FILE!!!");
	  
	while(feof(fp1))
	{
		char ch = getc(fp1);
		printf("\t%d",ch);
		putc(ch,fp2);
	}
	
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}
