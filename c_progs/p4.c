//wap to find out sinple intrest (without scanf())
#include<stdio.h>
int main() {
	int p,r,t,si;
	p=1000;
	r=5;
	t=10;
	printf("\n principal amount is ::%d\n rate is ::%d\n time is ::%d",p,r,t);
	//printf("\nthe rate is ::%d",r);
	//printf("\nthe time is ::%d",t);
	si=p*r*t/100;
	printf("\nthe simple intrest is ::%d",si);
	//am=p+si;//amount
	return(0);	
}
