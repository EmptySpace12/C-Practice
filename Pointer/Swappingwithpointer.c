#include<stdio.h>
//swapping with Pointer//
void swap(int*,int*);
void main()
{
	int a=10,b=20;
	printf("Before swapping a=%d b=%d\n",a,b);

	swap(&a,&b);
	printf("After swapping a=%d b=%d",a,b);

}
void swap(int *a,int *b)
{
	/*int m;
	m=*a;
	*a=*b;
	b=m;*/
//without using Third Variable//	
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	
		
	}
