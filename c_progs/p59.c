//wap to find biggest and smallest element in a array
#include<stdio.h>
int main()
{
	int a[5],i,b,c;
	int large,small;
	printf("enter the elements in the matrix");
	for(i=0;i<6;i++)
	{
		printf("\nenter a[%d]::",i);
		scanf("%d",&a[i]);
	}
	small=large=a[0];
	for(i=0;i<6;i++)
	{
		printf("\na[%d] is %d",i,a[i]);
		if(a[i]>large)
		{
		large=a[i];
	}
	if(a[i]<small)
	{
    small=a[i];
    }
	}
	printf("\nlargest is %d",large);
	printf("\nThe smallest element is %d\n",small);
	return 0;
}
