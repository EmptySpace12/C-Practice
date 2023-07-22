#include<stdio.h>

//just check no. is perfect or not by Function type 4//
int perfect(int);
void main() 
{
	int n,a;
	printf("Enter the number You want to Check: ");
    scanf("%d", &n);
	a=perfect(n);
	if(a==1)
	printf(" is a Perfect Number");
	else
	printf(" is Not a Perfect Number");
		

}
int perfect(int n)

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
			{
			printf("\n%d",n);
			return 1;
			}
			else
			{
			printf("\n%d",n);
			return 0;
			}
}


