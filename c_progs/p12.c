//wap to swap two numbers without third variable/number
#include<stdio.h>
int main() {
	int a,b;
	printf("enter two numbers let a & b");
	scanf("%d%d",&a,&b);
	printf("before swapping\na = %d\nb =%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nafter swapping\na = %d\nb =%d",a,b);
	return(0);
}
	
