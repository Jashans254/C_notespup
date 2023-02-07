//author: Jashanpreet Singh 
//Date 2/12/22
//recursion factorial
#include<stdio.h>
#include<conio.h>
int fact(int n);
void main() 
{
	int n,f;
	printf("enter any number");
		scanf("%d",&n);
		f=fact(n);
		printf("factorial =%d",f);
		getch();	
}
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
