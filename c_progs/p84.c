/*average of four numbers using functions
woawr*/
#include<stdio.h>
int avg(int,int,int,int);
int main()
{
	int av;
	avg(10,20,52,47);
	printf("%d",&av);
}
avg(int a,int b,int c,int d)
{
	int avg;
	avg=(a+b+c+d)/4;
	//printf("avg is %d",avg);
	return avg;
}
