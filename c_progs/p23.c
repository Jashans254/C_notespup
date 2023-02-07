//wap to input age of a person and conditions are 
// if age<12 then child if age between 12 to 25 then young if age between 25 
// to 50 then adualt if age > =50 old
#include<stdio.h>
int main() 
{
	int age;
	printf("enter the age of the person");
	scanf("%d",&age);
	if (age<12)
	{
	printf("the person is child"); 
    }
	else if  ((age>=12) && age<25 )
	{
	printf("the person is young");
	}
	else if (age>=25 && age<50)
	{
	printf("the person is adult");
    }
	else if (age>50)
	{
	printf("the person is old");
    }
	else 
	{
	printf("age is out of range ");
    }
	return(0);
}
	
