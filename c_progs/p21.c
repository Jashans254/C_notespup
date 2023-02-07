// wap to find whether the year is leap or not
#include<stdio.h>
int main() 
{
int y;
printf("enter the year in numbers eg ""2022"":: \t");
scanf("%d",&y);
if(y%100==0)
  {
  	if(y%400==0)
      {
       printf("it is a leap year");
	  }
	else
	    {
	    printf("it is not a leap year");
		}

  }
else
    {
      if(y%4==0)
      {
      	printf("it is a leap year");
	  }
	else
	    {
	    	printf("it is not a leap year");
		}

    }
return (0);
	}


