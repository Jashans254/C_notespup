//9/12/22 //JASHANPREET SINGH 
//WAP TO REVERSE GIVEN STRING
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i,j,k;
	char c[30];
	printf("enter any string");
	gets(c);
	i=strlen(c);
	printf("\nthe length of string using strlen is :: %d",i);
	k=i;
	/*printf("%d",k);
	i=0;
	while(c[i]!=NULL)
	{
		i=i+1;
	}
	printf("\nthe length of string without using inbuilt function is :: %d",i);
	printf("\n");
	strrev(c);
	printf("reverse of string using strrev is ");
	puts(c); inbuilt fn*/
	printf("reverse of string  is ");
	for(j=k;j>=0;j--)
	{ 
	
		printf("%c",c[j]);
		
	}
	//printf("\n rev is :: %c",c);
}
