//wap print table of a given number entered by the usere to check whether a given number is prime or not 
#include<stdio.h>
void main()
{
	int n,i,c=0;
	printf("enter a no.");
	scanf("%d",&n);
	printf("====TABLE OF %d is====",n);
	for(i=1;i<=10;i++)
	{
		printf("\n%d*%d=%d",n,i,n*i);
	}
	
	for(i=1;i<=n;i++)
	{
		//printf("\ni=%d",i);
		
		if(n%i==0)
		{
			c=c+1;
			//printf("\n%d",i);
			
		}
		
		
	}
	if(c==2)
	{
		printf("\n %d is prime no ",n);
	}
	else
	{
		printf("\nnumber is not prime ");
	}
	printf("\nclosing....");
}
