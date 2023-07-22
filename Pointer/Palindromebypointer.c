#include<stdio.h>
// only check palindrome or not by function type 4//
void palindrome(int*,int*);
void main()
{
	int a,n;
	printf("Enter no. Here to Check Palindrome or not ");
	scanf("%d",&n);
	
	palindrome(&n,&a);
	
	if(a==n)
	printf("Hey Your Entered Number is Palindrome");
	else
	printf("Hey Your Entered Number is Not Palindrome");
}

void palindrome(int* n,int* a)
{
//*a=0;
	int r,i;
	i=*n;
//for loop//	
	for(;i>0;i=(i)/10)
	{
		
		r=(i)%10;
		*a=(*a)*10+r;
		
	}
		
}

