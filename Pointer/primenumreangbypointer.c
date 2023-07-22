#include<stdio.h>
// prime no.range by Pointer //
void range_prime(int*,int*,int*);
void main() 

{
	int a,low,high;
	printf("Enter two numbers intervals: ");
   	scanf("%d %d", &low, &high);
	printf("Your Prime numbers btw %d to %d are:\n",low,high);
   
	for(low=2;low<high;low++)
	{
	 
		range_prime(&low,&high,&a);
		if(a==0)
		printf("\t%d",low);
	}
}
void range_prime(int* low,int* high,int*count )
{

   int  i;
    *count=0;
   
   // range alot
  
  
 //for loop//
 
 
 
 	 
      for (i = 2; i <= (*low) / 2; ++i) 
	  {

         if ((*low )% i == 0)
		  {
            *count = 1;
           break; 
          }
      }
  

      }




