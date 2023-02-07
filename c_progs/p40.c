//wap to print the sum of even number upto n
#include<stdio.h>
int main() 
{
	int n,i,m;
	int s=0;
	printf("enter start of series");
	scanf("%d",&n);
	i=n;
	printf("enter a no upto which series goes");
	scanf("%d",&m);
	i=n;
	//int i=1,s=0;
	while(i<=m)
	{
	printf("\n%d",i);
	i=i+1;
	      if(i%2==0)
		  {
		s=s+i;
		  }
	}
	printf("\nsum of even number is:: %d",s);
}
