#include<stdio.h>
//with loop by function type-3//
void last_firstsum(int*,int*);
void main()
{
	int n,sum;
	printf("Enter Your Number Here:");
	scanf("%d",&n);

	last_firstsum(&n,&sum);
	printf("First digit is:%d\n",n);
	printf("Sum of First and Last digit is:%d",sum);

}
void last_firstsum(int* n,int* sum)
{

	int r;
	r=(*n)%10;
	while(*n>10)
	{
		*n=(*n)/10;
		
	}
	printf("Last digit is:%d\n",r);
	*sum=r+(*n);
}
