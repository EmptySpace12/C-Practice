#include<stdio.h>
//even and odd function storing//

void main()
{
	int n,x,i,j,count=0;
//	int even=0,odd=0;
	int e[count];
	int o[count];
	printf("Enter the Range Here:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Your %d Element:",i);
		scanf("%d",&a[i]);

	}
	
//	printf("\nYour Elements  are:");
//		for(i=0;i<n;i++)
//	{
			for(j=0;j<n;j++)
				{
					if(a[j]%2==0)
					{
						e[count]=a[j];		
						count++;
					}
	
					
				}
		printf("\neven no. are:%d",count);
	for (x=0;x<count;x++)
	{
		printf("\n%d",e[x]);
	}		
	//bcz Here outside count is 1// so either u take two diff counting varible or set count=0 again	
	printf("\nFor odd Numbers ...");
	
	count=0;
	
	for(j=0;j<n;j++)
				{
					if(a[j]%2==1)
					{
						o[count]=a[j];		
						count++;
					}
	
					
				}
	printf("\nOdd no. are:%d",count);
	
	for (x=0;x<count;x++)
				{
					printf("\n%d",o[x]);
				}		
}

