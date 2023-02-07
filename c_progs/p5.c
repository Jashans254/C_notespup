//wap to enter 5 subjects marks and calculate total marks and percentage (with scanf())
#include<stdio.h>
int main()
{
	int a1,a2,a3,a4,a5,tm,pr;
	printf("enter the marks of 1st subject");
	scanf("%d",&a1);
	printf("enter the marks of 2nd subject");
	scanf("%d",&a2);
	printf("enter the marks of 3rd subject");
	scanf("%d",&a3);
	printf("enter the marks of 4th subject");
	scanf("%d",&a4);
	printf("enter the marks of 5th subject");
	scanf("%d",&a5);
	tm=a1+a2+a3+a4+a5;
	pr=(tm*100)/500;
	printf("the total marks are ::%d",tm);
	printf("\nthe percentage is ::%d",pr);
	return(0);
}
