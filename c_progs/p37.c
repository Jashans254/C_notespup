//wap to find whether a given number is Paladrone or not
#include<stdio.h>
void main() 
{
	int n,i,m;
	int s=0;
	printf("enter a no");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
	i=n%10;
	s=s*10+i;
	n=n/10;
	}
	printf("\nreverse is:: %d",s);
	if(s==m)
	{
		printf("\nnumber is a Paladrone");
	}
	else
	{
		printf("\nnumber is not a Paladrone");
	 	
	}
}
