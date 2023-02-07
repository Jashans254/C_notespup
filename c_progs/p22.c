//wap to find greatest from the given three integers 
//nested if 
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the 1st number");
	scanf("%d",&a);
	printf("enter the 2nd number");
	scanf("%d",&b);
	printf("enter the 3rd number");
	scanf("%d",&c);
if (a>b) {
	if (a>c) {
		printf("1st is the greatest");
	}
	}
if (b>a) {
	if (b>c) {
		printf("2nd is the greatest");
		
	}
	}
if (c>b) {
	if (c>a) {
		printf("3rd is the greatest");
	}
	}
return(0);
}

