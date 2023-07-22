#include<stdio.h>
//searching number in array//
int search(int*,int,int);
void main()
{
	int b,i,n,s;
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
	//printf("Hey Its Position is : ");
	b=search(a,n,s);
	if(b==1)
	printf("\n%d is present in array ",s);
	else
	printf("Not Present in Array");
		
}
int search(int* a,int n,int s)
{
 	int i,count;
	count=0;
	for(i=0;i<n;i++)
	{	 
	
	
			if(a[i]==s)
			{
				count=1;
				break;
			}
			
			
	}
		for(i=0;i<n;i++){
		
		if(count==1)
		return 1;
		else
		return 0;
	}
	}
	


