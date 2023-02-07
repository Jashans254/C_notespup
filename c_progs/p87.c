//author: Jashanpreet Singh 
//Date 2/12/22
/*wap to pass array as an argument to a function*/
#include<stdio.h>
#include<conio.h>
void show(int a[]);
void main()
{
	int x[5],i;
	for(i=0;i<5;i++)
	{
		printf("enter any number x[%d]",i);
		scanf("%d",&x[i]);
	}
	show(x);
	getch();
}
void show(int a[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\na[%d] is %d",i,a[i]);
	}
	
}

