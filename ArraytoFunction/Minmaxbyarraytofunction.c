#include <stdio.h>

//Max Number and min.. //
int max(int*,int);
int min(int*,int);

void main()
{
	int c,b,i,a[50],n;

	printf("Enter Size of array:");
	scanf("%d",&n);
	printf("Enter your Numbers here You Need to find Max and Min from:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);		
	}
	b=max(a,n);
	printf("\nmaximum of array is : %d",b);
	
	c=min(a,n);
	printf("\nminimum of array is : %d",c);
    
	
}
int max(int *p,int n)
{
		
	int i,max;
	max=p[0];
	for(i=1;i<n;i++)
	{
	if(max<p[i])
	{
	max=p[i];
	}
	}
	return max;
	
}

int min(int *p,int n)
{
		
	int i,min;
	min=p[0];
	for(i=1;i<n;i++)
	{
		if(min>p[i])
		{
		min=p[i];
		}
	
	}
		return min;
	
}
