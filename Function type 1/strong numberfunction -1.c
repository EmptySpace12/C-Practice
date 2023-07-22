#include<stdio.h>
//Check Strong number by Function type-1// 
void strong();
void main()
{
	strong();
}
void strong()
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
	
	(sum==temp && temp!=0)?printf("%d is Strong Number",temp):printf("%d is not Strong Number ",temp);


}

