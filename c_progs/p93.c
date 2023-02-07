//wap to input the name and store it in a file
#include<stdio.h>
#include<conio.h>
void main() 
{
	char str[32];
	FILE *fp;
	printf("enter your name");
	gets(str);
	fp=fopen("p93data","w");
	puts(str);
	printf("data is written into the file");
	fclose(fp);
	getch();
}

