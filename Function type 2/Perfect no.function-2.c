#include<stdio.h>

//just check no. is perfect or not by Function type 2//
int perfect();
void main() 
{
	int a;
	a=perfect();
	if(a==1)
	{
		printf(" is Perfect Number");
			
	}
	else 
	{
		printf(" is Not Perfect Number");
	}
}

int perfect()

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
			{
			printf("Hey..%d",n);
			return 1;
			}
			else
			{
				printf("Hey..%d",n);
				return 0;
			}
}


