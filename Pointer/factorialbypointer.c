#include<stdio.h>
//Factorial program with Pointer//
int fact(int*);
void main()
{
	int a;
	int n;
	printf("Enter Your Number here for knowing its Factorial:\n");
	scanf("%d",&n);
	a=fact(&n);
	printf("Hey Factorial of %d is %d",n,a);

}
int fact(int* n)
{
	int i,fac=1;
	for(i=1;i<=*n;i++)
	{
	fac=(fac)*i;
	}
	return fac;
}


