//wap to count odd numbers from 1 to 100
#include<stdio.h>
int main( ) {
	int i=1,c=0;
	while(i<=100)
	{
		//s=s+i;
		//printf("%d",s);
		if(i%2!=0) 
		{
			//printf("\n%d",i);
			c=c+1;
		}
		i=i+1;
	}
	printf("\ntotal odd numbers are %d",c);
	return(0);
}
