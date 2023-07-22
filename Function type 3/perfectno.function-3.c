#include<stdio.h>

//just check no. is perfect or not by Function type 3//
void perfect(int);
void main() 
{
	int n;
	printf("Enter the number You want to Check: ");
    scanf("%d", &n);
	perfect(n);

}
void perfect(int n)

{

  int  i,sum=0;  
  
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


