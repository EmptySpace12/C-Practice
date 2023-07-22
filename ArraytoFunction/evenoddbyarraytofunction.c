#include<stdio.h>
//even and odd array to function storing//
int even(int*,int);
int odd(int*,int);
void main()
{
	int b,c,n,x,i,j;
	printf("Enter the Range Here:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Your %d Element:",i);
		scanf("%d",&a[i]);

	}
		b=even(a,n);
		printf("\nEven no. count is:%d",b);

		c=odd(a,n);
		printf("\nOdd no. Count is :%d",c);
}

int even(int* a,int n)			
{
	int j,x,count=0;
	//int e[count];
	printf("The Even Number in Above Array Are:");
			for(j=0;j<n;j++)
				{
					if(a[j]%2==0)
					{
						printf("\n%d",a[j]);
						
						count++;
					}
					
				}
				
	return count;
	
}

int odd(int* a,int n)
{
	int j,x,count=0;
	printf("\nThe odd Number in Above Array Are:");
	//int o[count];
	
	count=0;
	
	for(j=0;j<n;j++)
				{
					if(a[j]%2==1)
					{
						printf("\n%d",a[j]);
						count++;
					}
	
					
				}
	
	return count;	
}

