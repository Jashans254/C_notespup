//wap to input a number and find it is postive or negatives
#include<stdio.h>
int main() 
{
	float a;
	printf("enter a number");
	scanf("%f",&a);
	if (a>0.0)
	{
	printf("the number is positive");	
	}
	else if (a<0.0)
	{
	printf("the number is negative");
	}
	else
	{
	printf("you enterned a zero");
	}
	return(0);
}
	
