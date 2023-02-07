/*add two numbers using functions
wawor*/
#include<stdio.h>
void add(int,int);
void main()
{
	int a,b;
	printf("enter two numbers ");
	scanf("%d%d",&a,&b);
	add(a,b);
}
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("sum = %d",c);
}

