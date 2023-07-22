#include<stdio.h>
//reverse of Digits with Pointer//
long long int reverse_digit(long long int*);
void main()
{
	long long int* a;
	long int n; 
	printf("Enter your NUmber here for summing its digits:\n");
	scanf("%lld",&n);
	a=reverse_digit(&n);
	printf("Hey Reverse of Digits of Above Number is :%lld",*a);
	
	
}
long long int reverse_digit(long long int* n)
{
	long long int r,re=0;
		for(;*n>0;*n=*n/10)
	{
	     r=(*n)%10;
		re=(re*10)+r;	
	}
return &re;
	
}
	

