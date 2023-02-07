//wap to input the length and breadth of a rectangle to calculate itsarea
#include<stdio.h>
int main() {
	int l,b,a;
	printf("enter the value of length");
	scanf("%d",&l);
	printf("enter the value of breadth");
	scanf("%d",&b);
	a=l*b;
	printf("the area of rectangle is ::%d",a);
	return(0);
}
