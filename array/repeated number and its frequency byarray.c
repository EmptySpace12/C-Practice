#include<stdio.h>
void main()
{
	int i,j,n;
	int count;
	printf("\nEnter the size of Array:");
	scanf("%d",&n);
	int a[n];
	int b[n];
	puts("\n...................................................................");
	puts("\n\n                           Your Elements");
	puts("\n...................................................................");

	printf("\nEnter Elements Here:");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=-1;	

	}
	for (i=0;i<n;i++)
	{
	count=1;
		for (j=i+1;j<n;j++)
				{
					if(a[i]==a[j])
					{			
					count++;
					b[j]=0;
					}
				}
		
		if(b[i]!=0)
		b[i]=count;		
	}
	
		puts("\n...................................................................");
		puts("\n\n                            Frequency");
		puts("\n...................................................................");
		for(i=0;i<n;i++)
		{
			if(b[i]!=0 && b[i]!=-1)
			
			printf("\n%d occurs %d times\n",a[i],b[i]);
		
		}
		puts("\n...................................................................");
	
}
