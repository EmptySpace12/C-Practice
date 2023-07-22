#include <stdio.h>


//sum by array using pointer to array //
void main()
{
	int i,a[50],n,sum;

	printf("Enter Size of array:");
	scanf("%d",&n);
	int *p;
	p=a;
	printf("Enter Your Numbers Here:\n");
	sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
		sum=sum+p[i];		
	
	}
	
	printf("Sum of All Above Numbers are:%d",sum);
    
}


