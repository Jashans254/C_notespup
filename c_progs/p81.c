/*average of four numbers using functions
woawor*/
#include<stdio.h>
void avg(void);
void main()
{
	avg();
}
void avg()
{
	int a,b,c,d,avg;
	printf("enter 4 numbers");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	avg=(a+b+c+d)/4;
	printf("avg is %d",avg);
}
