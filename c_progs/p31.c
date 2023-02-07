//wap to print series 2,4,8/3,9,27
#include<stdio.h>
int main() {
	int i,j;
	printf("enter the number whose series to be print");
	scanf("%d",&i);//2 or 3
	j=i;
	while(i<=100){
		printf("\n%d",i);
		i=i*j;
	}
	return(0);
}
