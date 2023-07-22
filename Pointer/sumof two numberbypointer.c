#include<stdio.h>
//sum of two number with Pointer//
void sum_num(int*,int*,int*);
void main()
{
	int n1,n2,sum;
	printf("Enter Any Two Numbers here for Addition of Numbers:\n");
	scanf("%d %d",&n1,&n2);
	sum_num(&n1,&n2,&sum);
	printf("Hey Your Addition of Above Number is :%d",sum);
	
}
void sum_num(int* n1,int* n2,int* sum)
{
	*sum=*n1+*n2;
}

