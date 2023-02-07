//wap to print series upto n-2
#include<stdio.h>
int main()
{
	int i=0,j,n;
	//printf("enter the number whose series to be print");
	//scanf("%d",&i);//2 or 3
	printf(" enter n where n is series end upto n-2:::");
	scanf("%d",&n);
	while(i<=(n-2)){
		printf("\n%d",i);
		i++;
	}
	return(0);
}
