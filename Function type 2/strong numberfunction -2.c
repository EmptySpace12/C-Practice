#include<stdio.h>
//Check Strong number by Function type-2// 
int strong();
void main()
{
	int a;
	a=strong();
	if(a==1)
	printf(" is Strong Number",a);
	else
	printf(" is Not Strong Number",a);
	
}
int strong()
{

	int n,i=1,r,sum=0,fact,temp;
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
	
	if(sum==temp && temp!=0)
	{  
		printf("Hey..%d",temp);
		return 1;
	}
	else
	{
		printf("Hey..%d",temp);
		return 0;
	}
	
}

