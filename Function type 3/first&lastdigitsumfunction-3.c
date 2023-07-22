#include<stdio.h>
//with loop by function type-3//
void last_firstsum(int);
void main()
{
	int n;
	printf("Enter Your Number Here:");
	scanf("%d",&n);

	last_firstsum(n);
}
void last_firstsum(int n)
{

	int r,sum;
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
