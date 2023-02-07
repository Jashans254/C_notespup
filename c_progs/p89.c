//author: Jashanpreet Singh 
//Date 2/12/22
//recursion sum of digits
#include<stdio.h>
#include<conio.h>
int sod(int n);
void main() 
{
	int n,f;
	printf("enter any number");
		scanf("%d",&n);
		f=sod(n);
		printf("sum of digits =%d",f);
		getch();
		
}
int sod(int n)
{
	if(n!=0)
	{
		return (n%10 + sod(n/10));
	}
	else
	{
		return 0;
	}
}
