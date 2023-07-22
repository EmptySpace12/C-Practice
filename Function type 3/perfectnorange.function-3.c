#include <stdio.h>
//perfect no. range ask for both range function type 3//
void perfect_range(int,int);
void main()
{
	int low,end;
	printf("Enter upper and Lower limit: ");
    scanf("%d %d", &low ,&end);

	perfect_range(low,end);
}
 void perfect_range(int low,int end)
 {
 
    int i, j,sum;

  
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

