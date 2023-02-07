/*average of four numbers using functions
wawor*/
#include<stdio.h>
void avg(int,int,int,int);
void main()
{
	avg(10,20,30,40);
}
void avg(int a,int b ,int c,int d)
{
	int avg;
	avg=(a+b+c+d)/4;
	printf("avg is %d",avg);
}
