//wap to count even numbers between two numbers given
#include<stdio.h>
int main()
{
	int i,n,c;
	printf("enter the start of series::");
	scanf("%d",&i);
	printf(" enter end of series::");
	scanf("%d",&n);
	while(i<=n){
		if(i%2==0) 
		{
			printf("\n%d",i);
			c=c+1;
		}
		i=i+1;
	}
	printf("\ntotal even numbers are %d",c);		
return(0);	
}
