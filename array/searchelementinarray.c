#include<stdio.h>
//searching number and also its position in array//

void main()
{
	int count,i,n,s;
	int b[n];
	printf("Enter Your Range Here:\n ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf(" %d Element:",i);
		scanf("%d",&a[i]);
	
	}
	printf("Enter Your Number u need to search for its Position \n ");
	scanf("%d",&s);
	printf("Hey Its Position is : ");
	count=0;
	for(i=0;i<n;i++)
	{	 
	
	
			if(a[i]==s)
			{
				count=1;
				break;
			}
			
			
	}
		
		if(count==1)
		printf("\n%d ",i+1);//agar index location we want we need to print i//	
		else
		printf("invalid");
			
	
	

			
//count//

count=0;
	for(i=0;i<n;i++)
	{	 
	
	
			if(a[i]==s)
			{
				count++;
				
			}
			
		}
		printf("\nFrequency is %d",count);	


}
   
