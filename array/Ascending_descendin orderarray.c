#include<stdio.h>
//Swapping By array//

void main()
{
	int i,n,j,temp=0;
	printf("Enter your Numbers here:\n ");
	scanf("%d",&n);
	int b[n];	
	for(i=0;i<n;i++)
	{
		printf("enter %d :",i);
		scanf("%d",&b[i]);
			
	}
	printf("Your Above Enetered Numbers in Descending Orders are :\n ");
		
	for(i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		if(b[j]>b[i])
		{
			temp=b[i];
			b[i]=b[j];
			b[j]=temp;
		}
		
		
		printf("%d ",b[i]);
	
	}

	printf("\nYour Above Enetered Numbers in Ascending Orders are :\n ");
		
	for(i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		if(b[j]<b[i])
		{
			temp=b[i];
			b[i]=b[j];
			b[j]=temp;
		}
		
		
		printf("%d ",b[i]);
	
	}

}










   
