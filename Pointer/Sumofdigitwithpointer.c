#include<stdio.h>
//Sum of Digits with Pointer//
void sum_digit(int*,int*);
void main()
{
	int n,sum=0;
	printf("Enter your NUmber here for summing its digits:\n");
	scanf("%d",&n);
	sum_digit(&n,&sum);
	printf("Hey Sum of Digits of Above Number is :%d",sum);
	
	
}
void sum_digit(int* n,int* sum)
{
	int r;
		for(;*n>0;*n=*n/10)
	{
	     r=(*n)%10;
		*sum=(*sum)+r;	
	}

	
}
	

