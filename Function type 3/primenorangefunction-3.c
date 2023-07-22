#include<stdio.h>
// prime no.range by function -3 //
void range_prime(int,int);
void main() 

{
	int low,high;
	printf("Enter two numbers intervals: ");
   	scanf("%d %d", &low, &high);

	range_prime(low,high);
}
void range_prime(int low,int high)
{

   int  i, count=0;
   printf("Prime numbers between %d and %d are: ", low, high);

   // range alot
  
  
 //for loop//
 
 for(;low<high;low++)
 {
 	 count = 0;

      // ignore no. < 2 bcz is lowest prime no.//
      
	  if (low <= 1) 
	  {
         ++low;
         continue;
      }

      for (i = 2; i <= low / 2; ++i) 
	  {

         if (low % i == 0)
		  {
            count = 1;
            
          }
      }
  

      if (count == 0)
     	printf("%d ", low);

 }

}

