//wap to subtract two matrices
#include<stdio.h>
#include<conio.h>
void main() {
	int a[3][3],b[3][3],c[3][3],i,j;
	//clrscr();
	printf("enter 1st matrix");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter 2nd matrix");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("subration of 3*3 matrices is ::\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf(" %d",c[i][j]);
		}
		printf("\n");
	}
}
