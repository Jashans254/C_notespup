//wap to enter 3 subjects marks and calculate total marks and percentage (with scanf()) 
// calculate the division of the dtudent after gettig valid marks for three subjects with the conditions
//that per>60 is first division  per<60 & per>40 is second division ,per<40 is 3rd division 
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
	if (pr>=60)
	{
	printf("\nFirst division");	
	}
	else if (pr>=60 && pr>40 )
	{
		printf("\nSecond division ");
	}
	else if (pr<40)
	{
		printf("\nThird division ");
	}
	else
	{
		printf("invalid");
	}
	return(0);
}
