//wap to enter a number in octal and convert into decimal
#include<stdio.h>
int main() 
{
	int n,i,j;
	printf("enter a number");
	scanf("%d",&n);
	
	for(i=n;i>=1;i=i/2)
	{
		j=i%2;
		printf("\n%d\t|%d\t|%d",i,i/2,i%2);
		
	}
}
