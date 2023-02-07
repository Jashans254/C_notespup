//wap to convert centigrade into faherenheit
#include<stdio.h>
int main()
{
	float c,f;
	printf("enter the temperature in centigrade");
	scanf("%f",&c);
	f=((9*c)/5)+32;
	printf("\ntemperature in fahernheit is %f",f);
	return(0);
}
