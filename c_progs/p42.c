//wap to print factorial of a given number
#include<stdio.h>
void main()
{
	int n,i,m=1;
	printf("enter a no.");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		m=m*i;
	}
	printf("factorial of %d is %d",n,m);
	
}
