//wap to input age of a person andk/ find whether he/she is eligble for voting or not
#include<stdio.h>
int main() 
{
	int age;
	printf("enter the age of the person");
	scanf("%d",&age);
	if (age>=18)
	{
	printf("he/she is eligble for voting");	
	}
	else
	{
		printf("he/she is not eligble for voting ");
	}
	return(0);
}
	
