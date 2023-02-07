//wap to print table of a number
#include<stdio.h>
int main() {
	int i,n,m;
	printf("enter a no whose table to be executed");
	scanf("%d",&n);
	printf("enter a no upto which table is printed");
	scanf("%d",&m);
	printf("========TABLE OF %d========",n);
	for(i=1;i<=m;i=i+1)
	{
		printf("\n%d*%d=%d",n,i,i*n);
	}
	return(0);
}
