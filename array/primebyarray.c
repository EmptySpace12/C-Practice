#include <stdio.h>
//Prime number by array //
void main()
{
	int i,n,j,count=0;

	printf("Enter Size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter Your Numbers Here:\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			
		}
		
	printf("Your Prime Numbers from above Numbers are:");
		for(i=0;i<n;i++)
		{
			for(j=2;j<a[i];j++)
			{	
			if(a[i]%j==0)
			{
			count=1;
			}
			}
		if(count==0 && a[i]!=1)
		printf("%d ",a[i]);
			
			
		}
}


