//9/12/22 //JASHANPREET SINGH 
//WAP TO FIND LENGTH OF A STRING
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i;
	char c[30];
	printf("enter any string");
	gets(c);
	/*i=strlen(c);
	printf("\nthe length of string using strlen is :: %d",i);*/
	i=0;
	while(c[i]!=NULL)
	{
		i++;
	}
	printf("\nthe length of string is :: %d",i);
}
