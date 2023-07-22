#include<stdio.h>
//with loop by function type-1//
void last_firstsum();
void main()
{
	last_firstsum();
}
void last_firstsum()
{

	int n,r,sum;
	printf("Enter Your Number Here:");
	scanf("%d",&n);
	r=n%10;
	while(n>10)
	{
		n=n/10;
		
	}
	printf("First digit is:%d\n",n);
	printf("Last digit is:%d\n",r);

	sum=r+n;
	printf("Sum of First and Last digit is:%d",sum);
}
