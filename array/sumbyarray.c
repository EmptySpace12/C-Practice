#include <stdio.h>


//Max Number and min.. //
void main()
{
	int i,a[50],n,sum;

	printf("Enter Size of array:");
	scanf("%d",&n);
	
	printf("Enter Your Numbers Here:\n");
	sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];		
	
	}
	
	printf("Sum of All Above Numbers are:%d",sum);
    
}


