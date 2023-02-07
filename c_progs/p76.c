//wap to enter name ,age,father name,city of a student and printf using structures
#include<stdio.h>
struct student 
{
	char name[25],fname[25],city[25];
	int age;
};
int main()
{
	struct student s;
	printf("enter the name of the student");
	gets(s.name);
	printf("enter the father name of the student");
	gets(s.fname);
	printf("enter the city of the student");
	gets(s.city);
	printf("enter the age of the student");
	scanf("%d",&s.age);
	printf(" the name of the student is %s",s.name);
	printf(" the father name of the student is %s",s.fname);
	printf("the city of the student is %s",s.city);
	printf(" the age of the student is %d",s.age);
	
}
