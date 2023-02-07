//input basic pay and calucalate total pay (basic pay + bonus )
//conditions are pay<1000 bonus 10%
//pay b/w 1000 & 3000 bonus 9% pay b/w 3000 & 5000 bonus 8% 
//pay>=5000 bonus 7%
#include<stdio.h>
int main()
{
float pay,bon,tp;
printf("enter the Basic pay :: \t");
scanf("%f",&pay);
if (pay<1000)
{
bon=pay*0.1;
tp=pay+bon;
printf("%f",tp);	
}
else if (pay>1000 && pay<3000)
{
bon=(pay*9)/100;
tp=pay+bon;
printf("the total pay is::%f",tp);	
}
else if (pay>3000 && pay<5000)
{
bon=(pay*8)/100;
tp=pay+bon;
printf("the total pay is::%f",tp);	
}
else if (pay>=5000)
{
bon=(pay*7)/100;
tp=pay+bon;
printf("the total pay is::%f",tp);	
}
else
{
printf("invalid");
}
	//printf("the total pay is::%d",tp);	
return(0);
}
