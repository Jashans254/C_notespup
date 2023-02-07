//wap to print fabbonacci series
#include<stdio.h>
int main()
{
	int i,n;
	//intialize first and second term
	int t1=0,t2=1;
	// intialize the next term(3rd term)
	int nexterm = t1+t2;
	//get no. of terms grom user
	printf("enter the number of terms::");
	scanf("%d",&n);
	//print the first two terms t1 and t2
	printf("Fibonacci Series : %d,%d,",t1,t2);
	for(i=3;i<=n;++i)
	// print 3rd to nth terms
	{
		printf("\n%d,",nexterm);
		t1=t2;
		t2=nexterm;
		nexterm=t1+t2;
	}
	return(0);
}
