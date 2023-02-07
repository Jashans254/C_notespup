//wap to merge two arrays 
#include<stdio.h>
int main()
{
	int i,n,m,x,j;
	printf("enter the size of array 1::");
	scanf("%d",&n);
	printf("enter the size of array 2::");
	scanf("%d",&m);
	int a[n],b[m];
	for(i=0;i<n;i++)
	{
		printf("\nenter a[%d]::",i);
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
	{
		printf("\na[%d] is %d",i,a[i]);
}
for(i=0;i<m;i++)
	{
		printf("\nenter b[%d]::",i);
		scanf("%d",&b[i]);
	}
		for(i=0;i<m;i++)
	{
		printf("\nb[%d] is %d",i,b[i]);
}
printf("\nmerging two arrays array 1 to array 2");
x=m+n;
int c[x];
	for(i=0;i<x;i++)//x=3,i=0,1,2
	{
		if(i<n)//n=1,i=0
		{
		c[i]=a[i];
	    }
	    if(i>=n && i<x)//n=1,m=2,x=3 so i=1,2
	    {
	    	for(j=0;j<m;j++)//m=2,x=3,j=0,1
			 {
		c[i]=b[j];
      	}
	    }
		
    }
    	for(i=0;i<x;i++)
	{
		printf("\nc[%d] is %d",i,c[i]);
}

}
