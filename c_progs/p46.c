//wap to print armstrong numbers upto 1000
#include<stdio.h>
int main() 
{
	int n,i,m,t;
	printf("armstrong numbers upto 1000 are");
	for(n=1;n<1000;n++)
	{
	t=n;
	m=0;
	while(t>0)
	{
		i=t%10;
		m=m+i*i*i;
		t=t/10;
		
	}
	if(m==n)
	{
		printf("\n %d is armstrong",m);
	}
	
}
return (0);
}
