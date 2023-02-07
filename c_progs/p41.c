//wap to print the sum of square of even number upto n
#include<stdio.h>
int main() 
{
	int n,i,m,j;
	int s=0;
	printf("enter start of series");
	scanf("%d",&n);
	//i=n;
	printf("enter a no upto which series goes");
	scanf("%d",&m);
	i=n;
	while(i<=m)
	{
	//printf("\n%d\t%d",i,j);
	//i=i+1;
	//j=i*i;
	//printf("\ni=%d",i);
	      if(i%2==0)//checking even number
		  {
		  	j=i*i;//squaring the even no.
		s=s+j;//adding value of j to sum
		printf("\nsq of i %d is %d",i,j);
		  }
		  i=i+1;
	}
	printf("\nsum of square of even number is:: %d",s);
}
