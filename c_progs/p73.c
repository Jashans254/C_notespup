//wap to input the name and roll no of ten students and print it using structures
#include<stdio.h>
struct student
{
	char name[20];
	int roll,marks;
};
int main() 
{
	 struct student s[10];
	 int i;
	 for(i=0;i<=9;i++)
	 {
	 printf("enter student name");
	 scanf("%s",&s[i].name);
	 printf("enter roll no");
	 scanf("%d",&s[i].roll);
	 printf("enter marks");
	 scanf("%d",&s[i].marks);
    }
    for(i=0;i<=9;i++)
	 {
	 printf("details of %d student ");
	 printf("\n name= %s",s[i].name);
	 printf("\n roll no = %d",s[i].roll);
	 printf("\n marks = %d ",s[i].marks);
    }
return (0);
	 
}
