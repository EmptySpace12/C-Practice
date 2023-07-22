#include <stdio.h>
//perfect no. range ask for both range function type 1 //
void perfect_range();
void main()
{
	 perfect_range();
}
 void perfect_range()
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

