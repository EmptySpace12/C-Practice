#include <stdio.h>
//perfect no. range ask for both range function type 4//
int perfect_range(int);
void main()
{
	int a,i,low,end;
	printf("Enter upper and Lower limit: ");
    scanf("%d %d", &low ,&end);
	printf("All Perfect numbers between % to %d:\n",low, end);
   
	for(i=low; i<=end; i++)
    {
	a=perfect_range(i);
	if(a==i)
	printf(" %d\t",i);
	}

}
int perfect_range(int i)
 {
 
    int  j,sum;

  

    // range loop//
    
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
            return i;
        }
    

 }

