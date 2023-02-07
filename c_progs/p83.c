/*average of four numbers using functions
woawr*/
#include<stdio.h>
int avg(void);
void main()
{
	int av;
	av=avg();
	printf("%d",&av);
}
avg()
{
	int a,b,c,d,avg;
	printf("enter 4 numbers");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	avg=(a+b+c+d)/4;
	//printf("avg is %d",avg);
	return (avg);
}
