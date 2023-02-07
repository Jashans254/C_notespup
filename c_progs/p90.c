//wap to 
#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b);
void swap(int *a,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}
void main()
{
	int x,y;
	printf("enter the value of x");
	scanf("%d",&x);
	printf("enter the value of y");
	scanf("%d",&y);
	swap(&x,&y);
	printf("\n after swaping");
	printf("\nthe value of x = %d",x);
	printf("\nthe value of y = %d",y);	
	getch();
}

