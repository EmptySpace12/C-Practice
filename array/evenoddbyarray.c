#include <stdio.h>
//odd and even number by array //
void main()
{
	int i,n,odd=0,even=0;

	printf("Enter Size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter Your Numbers Here:\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	printf("\n___________________________________________________");
	printf("\n\nYour Even Numbers from above Numbers are:");
		for(i=0;i<n;i++)
		{
		if(a[i]%2==0)
		{
		
		printf("%d ",a[i]);
		even++;
		}
		}
	printf("\n\nTotal Even Numbers are:%d",even);
	printf("\n___________________________________________________");
	
	printf("\nYour Odd Numbers from above Numbers are:");
		for(i=0;i<n;i++)
		{
			
		if(a[i]%2==1)
		{
		
		printf("%d ",a[i]);
		odd++;
		}
		}
	printf("\n\nTotal Odd Numbers are:%d",odd);
	printf("\n___________________________________________________");
	
}



