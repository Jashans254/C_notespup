//wap to check whether a given number is prime or not 
#include<stdio.h>
void main()
{
	int n,i,c=0;
	printf("enter a no.");
	scanf("%d",&n);
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
		printf("\nnumber is prime ");
	}
	else
	{
		printf("\nnumber is not prime%d ",i);
	}

	
}
