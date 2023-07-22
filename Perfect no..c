#include <stdio.h>

//...........Perfect All cases....//

//just check no. is perfect or not//

void main() 
{

  int  i,n,sum=0;  
  printf("Enter the number You want to Check: ");
  scanf("%d", &n);
//for loop//
		for(i=1;i<n;i++)
		{
			if(n%i==0)
			{
			sum=sum+i;
			}
		}
//while loop//
		while(i<n)
		{
			i=1;
			if(n%i==0)
			{
				sum=sum+i;
			}
			i++;
		}
	 		(sum==n)?printf("\nHey..%d is a Perfect Number",n):printf("\nHey..%d is a not Perfect Number",n);
			/*if(sum==n)
			printf("\nHey..%d is a Perfect Number",n);
			else
			printf("\nHey..%d is a not Perfect Number",n);*/
	
}


//range type//
//ask from user upper limit//

void main()
{
    int i, j, end, sum;

    // Input upper limit to print perfect number //
    printf("Enter upper limit: ");
    scanf("%d", &end);

    printf("All Perfect numbers between 1 to %d:\n", end);
    
    // range loop//
    for(i=1; i<=end; i++)
    {
        sum = 0;

 //condition//
       
        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
 
       if(sum == i)
        {
            printf("\n%d ", i);
        }
    }

 }


//ask for both range //

void main()
{
    int i, j, low,end, sum;

    // Input upper limit to print perfect number //
    printf("Enter upper and Lower limit: ");
    scanf("%d %d", &low ,&end);

    printf("All Perfect numbers between % to %d:\n",low, end);
    
    // range loop//
    for(i=low; i<=end; i++)
    {
        sum = 0;

 //condition//
       
        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
 
       if(sum == i)
        {
            printf("\n%d ", i);
        }
    }

 }


