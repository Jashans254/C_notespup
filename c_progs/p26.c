//input two numbers and a choice if "a" add it and if choice is "s"
// then subtract and if choice is 'd' then divide it otherwise give 
// message wrong key 
#include<stdio.h>
void main() {
	int n1,n2,a,s,d;
	char ch;
	/*printf("enter the value of first no.");
	scanf("%d",&n1);
	printf("enter the value of second no.");
	scanf("%d",&n2);*/
	printf("enter your choice :\n----------------------------");
	printf(" \n'a' to add 's' to subtract 'd' to divide:");
	//c="a";
	scanf("%c",&ch);
	printf("%c\n",ch);
	printf("enter the value of first no.");
	scanf("%d",&n1);
	printf("enter the value of second no.");
	scanf("%d",&n2);
	printf("\n");
	if (ch=='a') {
		a=n1+n2;
		printf("addition::%d",a);
	}
	else if (ch=='s') {
		s=n1-n2;
		printf("addition::%d",s);
	}
	else if (ch=='d') {
		d=n1/n2;
		printf("divsion::%d",d);
	}
	else {
		printf("wrong key pressed");
	}
	getch();
	
	//return(0);
}
