#include<stdio.h>
//Check Strong number by Function type-4// 
int strong(int);
void main()
{
	int a,n;
	printf("Enter a Number u want to Check here:");
	scanf("%d",&n);

	a=strong(n);
	if(a==1)
	printf("The Above number is a Strong Number");
	else
	printf("The Above number is not a Strong Number");
	
}
int strong(int n)
{

	int i=1,r,sum=0,fact,temp;
	
	
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
	//by ternary//
	
	return(sum==temp && temp!=0)?1:0;


}

