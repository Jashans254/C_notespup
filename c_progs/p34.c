/*wap to program to print'
9
99
999
9999*/
#include<stdio.h>
int main()
{
	int i,j=9;
	for(i=1;i<=9999;i=i*10+1)
	{
	printf("\n%d",j*i);
	}
return(0);
}

