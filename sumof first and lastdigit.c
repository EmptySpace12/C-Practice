#include<stdio.h>

//Add First and Last Digit of Number cases //

//without loop//
void main()
{
	int f,n,r,sum,digit;
	printf("Enter Your Number Here:");
	scanf("%d",&n);
	r=n%10;
	//ye n-1 deta hai means for three  it will give  2..log properties//
	digit=log10(n);
	f=n/(pow(10,digit));
	sum=f+r;
	printf("First digit is:%d\n",f);
	printf("Last digit is:%d\n",r);
	printf("Sum of First and Last digit is:%d",sum);
}

//with loop//
void main()
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
