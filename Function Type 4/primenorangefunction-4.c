#include<stdio.h>
// prime no.range by function -4 //
int range_prime(int,int);
void main() 

{
	int a,low,high;
	printf("Enter two numbers intervals: ");
   	scanf("%d %d", &low, &high);
	printf("Your Prime numbers btw %d to %d are:\n",low,high);
   
	for(low=2;low<high;low++)
	{
	 
		a=range_prime(low,high);
		if(a==1)
		printf("\t%d",low);
	}
}
int range_prime(int low,int high)
{

   int  i, count=0;
   
   // range alot
  
  
 //for loop//
 
 
 
 	 count = 0;

      for (i = 2; i <= low / 2; ++i) 
	  {

         if (low % i == 0)
		  {
            count = 1;
           break; 
          }
      }
  

      if (count == 0)
		return 1;
}




