//wap to input the name and roll no of ten students and print it using structures
#include<stdio.h>
struct student
{
	char name[20];
	int roll;
};
int main() 
{
	 struct student s;
	 printf("enter student name");
	 gets(s.name);
	 printf("enter roll no");
	 scanf("%d",&s.roll);
	 printf("details of student ::");
	 printf("\n name = %s",s.name);
	 printf("\n roll no = %d",s.roll);
return (0);	 
}
