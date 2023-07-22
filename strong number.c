#include<stdio.h>
/*
void main()
{
	int n,i=1,r,sum=0,fact=1,temp;
	printf("Enter a Number u want to Check here:");
	scanf("%d",&n);
	
	
//for loop//	
//range loop//	
	for(temp=n;n;n=n/10)
	{   
	    
		fact=1;
		r=n%10;
//condition		
		for(i=1;i<=r;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
	}
	
//while loop//
temp=n;

		while(n)
		
		{
			i=1;fact=1;
			r=n%10;
			while(i<=r)
			{
				fact=fact*i;
				i++;
			}
			sum=sum+fact;
			n=n/10;
		}
	(sum==temp && temp!=0)?printf("%d is Strong Number",temp):printf("%d is not Strong Number ",temp);


}
*/
//range type//
void main()
{
	int k,n,low,high,i=1,r,sum=0,fact=1,n1;
	printf("Enter a lower and upper limit u want to Check here:");
	scanf("%d %d",&low,&high);
	
	
//for loop//	
//range loop//	
for(k=low;k<=high;k++)
{
	n1=k;
	sum=0;
	
	for(n=k;n;n=n/10)
	{   
	    fact=1;
		r=n%10;
//condition for factorial		
		for(i=1;i<=r;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
	}
	
if(sum==n1 && n1!=0)
printf("%d\n",n1);
}

}







#include <stdio.h>

//Max Number and min.. //
void main()
{
	int i,a[50],n,min,max;

	printf("Enter Size of array:");
	scanf("%d",&n);
	
	printf("Enter your Numbers here You Need to find Max and Min from:\n");
	
	for(i=0;i<n;i++)
	{
	//	printf("Enter your Numbers here:\n ");
		scanf("%d",&a[i]);		
	}
	min=max=a[0];
	for(i=1;i<n;i++)
	{
	if(min>a[i])
	min=a[i];
	if(max<a[i])
	max=a[i];
	}
	printf("minimum of array is : %d",min);
    printf("\nmaximum of array is : %d",max);
	
}

