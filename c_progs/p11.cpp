//wap to enter 5 five ages and find the average
#include<stdio.h>
int main()
{
	int a1,a2,a3,a4,a5,t,av;
	printf("enter the age of 1st person");
	scanf("%d",&a1);
	printf("enter the age of 2nd person");
	scanf("%d",&a2);
	printf("enter the age of 3rd person");
	scanf("%d",&a3);
	printf("enter the age of 4th person");
	scanf("%d",&a4);
	printf("enter the age of 5nd person");
	scanf("%d",&a5);
	t=a1+a2+a3+a4+a5;
	av=t/5;
	printf("the average age is ::%d",av);
	return(0);
}
