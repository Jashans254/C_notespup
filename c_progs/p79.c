/*add two numbers using functions
woawr*/
#include<stdio.h>
int add(void);
void main()
{
	int c;
	c=add();
	printf("sum = %d",c);
}
int add()
{
	int a,b,c;
	printf("enter two numbers ");
	scanf("%d%d",&a,&b);
	c=a+b;
	return (c);
}

