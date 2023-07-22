#include<stdio.h>
//Factorial by Recursion//
int fac(int n)
{
	if(n==0)
		return 1;
	else
		return n*fac(n-1);
}

void main ()
{
	
	int num;
	printf("Enter the number here:");
	scanf("%d",&num);
//	while(i<=n)
//	fact=fac*i;
//	i++;
	printf("Factorial of %d is %d",num,fac(num));
}
