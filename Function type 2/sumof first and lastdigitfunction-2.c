#include<stdio.h>
//with loop by function type-1//
int last_firstsum();
void main()
{
	int sum;
	sum=last_firstsum();
	printf("Sum of First and Last digit is:%d",sum);
}
int last_firstsum()
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
	return sum;
}
