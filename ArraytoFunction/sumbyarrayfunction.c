#include <stdio.h>


//Max Number and min..by array function //
void main()
{
	int b,a[50],n;

	printf("Enter Size of array:");
	scanf("%d",&n);
	b=sumarray(a,n);
	printf("Sum of All Above Numbers are:%d",b);
    
}
int sumarray(int* a,int n)
{
	int sum,i;
	printf("Enter Your Numbers Here:\n");
	sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];		
	}
		return sum;
	
}
