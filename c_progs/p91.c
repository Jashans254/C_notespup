//wap to swap two numbers using pointers
#include<stdio.h>
int main()
{
	int *a,*b,x,y;
	printf("enter two numbers ::");
	scanf("%d%d",&x,&y);
	a=&x;
	b=&y;
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;	
	printf("after swapping");
	printf("%d\n%d",*a,*b);
	return(0);
}
