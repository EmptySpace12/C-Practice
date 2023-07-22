#include<stdio.h>
// strong no range function type 1//

void strong_range();
void main()

{
	 strong_range();
}
void strong_range()
{
	
	int k,n,low,high,i=1,r,sum=0,fact=1,n1;
	printf("Enter a lower and upper limit u want to Check here:");
	scanf("%d %d",&low,&high);
	
	
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
printf("%d\n",n1);
}

}
