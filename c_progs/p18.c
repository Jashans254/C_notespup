//wap to enter 3 subjects marks and calculate total marks and percentage (with scanf()) 
// if per>50 pass else fail
#include<stdio.h>
int main()
{
	int a1,a2,a3,tm,pr;
	printf("enter the marks of 1st subject");
	scanf("%d",&a1);
	printf("enter the marks of 2nd subject");
	scanf("%d",&a2);
	printf("enter the marks of 3rd subject");
	scanf("%d",&a3);
	tm=(a1+a2+a3);
	pr=(tm*100)/300;
	printf("the total marks obtained are ::%d",tm);
	printf("\nthe percentage is ::%d",pr);
	if (pr>=50)
	{
	printf("\nPASS");	
	}
	else
	{
		printf("\nFAIL ");
	}
	return(0);
}
