#include<stdio.h>
//Sum
int sum(int n)
{
	if(n==1)
		return 1;
	else
		return n+sum(n-1);
}

void main ()
{
	
	int num;
	printf("Enter the number here:");
	scanf("%d",&num);
	printf("Sum of  Natural numbers till %d is %d",num,sum(num));
}
