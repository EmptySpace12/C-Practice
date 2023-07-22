#include<stdio.h>
// strong no range function type 4//

int strong_range(int);
void main()

{
	int n1,a,k,low,high;
	printf("Enter a lower and upper limit u want to Check here:");
	scanf("%d %d",&low,&high);
	printf("Hey Your Strong Numbers btw your limits are:");
	for(k=low;k<=high;k++)
	{	
	
  	a=strong_range(k);
	if(a==k)
	printf("%d\t",k);
	
	}
	
}
int strong_range(int k)
{
	
	int n,i=1,r,sum=0,fact=1,n1;
	
	
//for loop//	
//range loop//	
	n1=k;
	sum=0;
	
	for(n=k;n;n=n/10)
	{   
	    fact=1;
		r=n%10;
//condition for factorial		
		for(i=1;i<=r;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
	}
	
		if(sum==k)
		return sum;
		}


