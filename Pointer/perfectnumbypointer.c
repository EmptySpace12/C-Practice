#include<stdio.h>

//just check no. is perfect or not by Pointer//
void perfect(int*,int*);
void main() 
{
	int n,sum;
	printf("Enter the number You want to Check for Perfect Number: ");
    scanf("%d", &n);
	perfect(&n,&sum);
    
	printf("Hey..%d" ,n);
	if(sum==n)
	printf(" is a Perfect Number");
	else
	printf(" is Not a Perfect Number");
		

}
void perfect(int* n,int* sum)

{

  int  i;
  *sum=0;  
  
//for loop//
		for(i=1;i<*n;i++)
		{
			if((*n)%i==0)
			{
			*sum=*sum+i;
			}
		}
			

}


