//wap to  print sum of diagonal elements of matrices
#include<stdio.h>
#include<conio.h>
void main() {
	int a[3][3],sum=0,i,j;
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
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(i==j)
			{
			sum=sum+a[i][j];
		    }
		}
	}
	printf("sum of diagonal elements of matrix is : %d",sum);
}
