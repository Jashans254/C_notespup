//wap to print the series of prime numbers up to n
//#include<stdio.h>
/*int main ()
{
    int i, prime, up, low, n;
    printf ("ENTER THE LOWER LIMIT : ");
    scanf ("%d", &low);
    printf ("ENTER THE UPPER LIMIT : ");
    scanf ("%d", &up);
    if(low>=2)
    {
        printf ("PRIME NUMBERS ARE : ");
        for (n = low ; n < up; n++)
        {
            prime = 1;
            for (i = 2; i < n/2; i++)
                if (n % i == 0)
                {
                    prime = 0;
                    break;
                }
            if (prime)
                printf ("\n %d", n);
        }
    }
    else
    {
        printf("Enter lower number must be greater than 1");
    }
}*/


//wap to check whether a given number is prime or not 
#include<stdio.h>
void main()
{
	int n,i,y,z,j,c=0;
	printf("\nto check whether a given number is prime or not");
	printf("\nenter start of series");
	scanf("%d",&y);
	printf("\nenter a no upto which series goes");
	scanf("%d",&z);
	printf("\nto check whether a given number is prime or not");
	printf("\nprime no between %d and %d are ",y,z);
    for(j=y;j<=z;j=j+1)
    {
    	printf("\nchecking %d ....",j);
    	
	c=0;
	for(i=1;i<=j;i=i+1)
	{
		//printf("\ni=%d",i);
		
		if(j%i==0)
		{
			c=c+1;
			//printf("\n%d",i);
			
		}
		
		
	}
	if(c==2)
	{
		printf("\n%d is prime",i-1);
	}
	else
	{
		printf("\n%d is not prime ",i-1);
	}
}

	
}
