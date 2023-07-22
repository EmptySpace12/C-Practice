#include <stdio.h>

// TWO NO WITH OPERATOR. by Function type 4// 
int Choose_operator(int,int);
void main()
 {
 	int n1,n2;
 	int a;
	printf("Please Enter first no. here:");
	scanf("%d",&n1);
	
	printf("Please Enter Second no. here: ");
	scanf("%d",&n2);
	
 	a=Choose_operator(n1,n2);
 printf("Your outcome is:%.3f",a);
    
 }
 int Choose_operator(int n1,int n2)
 {
 
  int sum,sub,mut,mod,div;
	char ch;
	
		/*printf("\n 1.  addition ");
		printf("\n 2.  subtraction ");
		printf("\n 3.  multiplication ");
		printf("\n 4.  division");
		printf("\n 5.  Modulus ");*/
	
	fflush(stdin);
	printf("Please Enter operator here: ");
	
	scanf("%c",&ch);

	if(ch=='+')
	{
		sum = n1+n2;
		return sum;
	}
	else if(ch=='-')
	{
		sub = n1-n2;
		return sub;
	}
	else if(ch=='*')
	{
		mut=n1*n2;
		return mut;	
	}
	else if(ch=='/')
	{
		div=n1/n2;
		return div;
    }
	else if(ch=='%')
	{
		mod=n1%n2;
		return mod;
    }

}
