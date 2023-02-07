//wap to add two matrices
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
	printf(" enterd matrix:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	 printf(" \n transpose of  matrix:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf(" %d ",a[j][i]);
		}
		printf("\n");
	}
	
	
}
