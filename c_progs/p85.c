//wap to add,subtract,multiply,divide using functions
#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
void main()
{
	int a,b;
	printf("\nenter two numbers ");
	scanf("%d%d",&a,&b);
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
}
int add(int a,int b)
{
	int c;
	c=a+b;
	printf("\nsum = %d",c);
	return c;
	
}
int sub(int a,int b)
{
	int c;
	c=a-b;
	printf("\nsub = %d",c);
	return c;
	
}
int mul(int a,int b)
{
	int c;
	c=a*b;
	printf("\nmul = %d",c);
	return c;
	
}
int div(int a,int b)
{
	int c;
	c=a/b;
	printf("\ndiv = %d",c);
	return c;	
}




