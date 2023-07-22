#include<stdio.h>
// strong no range function type 3//

void strong_range(int,int);
void main()

{
	int low,high;
	printf("Enter a lower and upper limit u want to Check here:");
	scanf("%d %d",&low,&high);
	printf("Hey Your Strong Numbers btw your limits are:");
	
	strong_range(low,high);
}
void strong_range(int low,int high)
{
	
	int k,n,i=1,r,sum=0,fact=1,n1;
	
	
//for loop//	
//range loop//	
for(k=low;k<=high;k++)
{
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
	
		if(sum==n1 && n1!=0)
		printf("%d\t",n1);
		}

}
