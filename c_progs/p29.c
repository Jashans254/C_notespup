//wap to print sum of first five natural numbers 
#include<stdio.h>
int main( ) {
	int i,s;
	s=0;
	i=1;
	while(i<=5)
	{
		
		//s=s+i;
		printf("\n%d  + %d",s,i);
		//printf("\n%d",i);
		s=s+i;
		i=i+1;
	}
	printf("\nsum= %d",s);
	return(0);
}
