#include<stdio.h>
// prime no.all cases//

void main()
{
   int n, i, count = 0;
 
    printf("Enter number to check prime number or not");
    scanf("%d",&n);
    i=2;
    while(i<=n/2)
    {
        // check for non prime number
        if(n%i==0)
        {
            count=1;
            break;
        }
        i++;
		
    }	
//ternary ....//
   
   count == 1 ? printf("Not Prime") : printf("Prime");
                      
	/*				  or 
					   
    if (count==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);*/
}

//same to check but aslo showing factors //

void main()
{
	int count=0,n,i;
	
	printf("Enter your no. for Checking...");
	scanf("%d",&n);
    
	if(n==2)
	{ 
	printf("not prime..");
	}
	
	if (n==1)
	{
		printf("prime.");
	}
	else
	{
	
		for(i=2;i<=n/2;i++)
		{
	
			if(n%i==0)
			{
				count=1;
				printf("\tFactors are %d:\n",i);	      
			}
		
	    }
	}

	       count == 1 ? printf("Not Prime") : printf("Prime");
 

}

 //range question both from user //

void main() 
{
   int low, high, i, count=0;
   printf("Enter two numbers intervals: ");
   scanf("%d %d", &low, &high);
   printf("Prime numbers between %d and %d are: ", low, high);

   // range alot
  
  //using while loop//
   
   while (low < high) 
   {
      count = 0;

      // ignore numbers less than 2
      
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

      // to check prime for the next number
      // increase low by 1
      ++low;
   }
 
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

