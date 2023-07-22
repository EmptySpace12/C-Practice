#include<stdio.h>

//with loop by function type-4//

int last_firstsum(int);
void main()
{
	int n,a;
	a=last_firstsum(n);
	printf("Sum of First and Last digit is:%d",a);

}
int last_firstsum(int n)
{

	int r,sum;
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
