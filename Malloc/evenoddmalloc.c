#include <stdio.h>
#include <stdlib.h>

//odd and even number using mallocy //
void main()
{
	int i,n,odd,even;
	
	printf("Enter Size of array:");
	scanf("%d",&n);
	int a[n];
	int *p;
	p= (int*) malloc((sizeof (int)*n));
	//p=a;
	printf("Enter Your non Repeatative Numbers Here:\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&p[i]);
			
		}
		
	printf("Your Even Numbers from above Numbers are:");
		for(i=0;i<n;i++)
		{
		if(p[i]%2==0)
		printf("%d ",p[i]);
		}
				
	printf("\nYour Odd Numbers from above Numbers are:");
		for(i=0;i<n;i++)
		{
		if(p[i]%2==1)
		printf("%d ",p[i]);
		}
	
}



