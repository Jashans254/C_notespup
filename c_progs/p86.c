//author: Jashanpreet Singh 
//Date 2/12/22
//wap to basicpay,ta,da and calculate total pay with return
//with argument
#include<stdio.h>
#include<conio.h>
int emp(int bp,int ta,int da);//function decalaration
int main() 
{
	int bp,ta,da,tp;
	printf("enter the basicpay ");
	scanf("%d",&bp);
	printf("enter ta");
	scanf("%d",&ta);
	printf("enter da");
	scanf("%d",&da);
	tp=emp(bp,ta,da);
	printf("the total salary is %d",tp);
}
int emp(int bp,int ta,int da)
{
	int tp;
	tp=bp+da+ta;
	return (tp);
}


