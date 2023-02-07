/*wap to program to print
1
12
123
1234
*/
#include<stdio.h>
int main() {

	int c,r;
	for(r=1;r<=4;r++)
	{
	for(c=1;c<=r;c++)
	{
	printf("%d",c);
	}
	printf("\n");
    }
return(0);
}
