#include <stdio.h>
#include<stdlib.h>
//Max Number and min..using malloc //
void main()
{
	int i,a[50],n,min,max;

	printf("Enter Size of array:");
	scanf("%d",&n);
	int *p;
	p= (int*) malloc((sizeof (int)*n));

	//p=a;
	
	printf("Enter your Numbers here You Need to find Max and Min from:\n");
	
	for(i=0;i<n;i++)
	{
	//	printf("Enter your Numbers here:\n ");
		scanf("%d",&p[i]);		
	}
	min=max=p[0];
	for(i=1;i<n;i++)
	{
	if(min>p[i])
	min=p[i];
	if(max<p[i])
	max=p[i];
	}
	printf("minimum of array is : %d",min);
    printf("\nmaximum of array is : %d",max);
	
}



