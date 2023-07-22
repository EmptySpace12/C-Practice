#include<stdio.h>

//just check no. is perfect or not by Function type 1//
void perfect();
void main() 
{
	perfect();

}
void perfect()

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
			if(sum==n)
			printf("\nHey..%d is a Perfect Number",n);
			else
			printf("\nHey..%d is a not Perfect Number",n);
	
}


