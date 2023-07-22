#include <stdio.h>

// TWO NO WITH OPERATOR. by Function type 1// 
void Choose_operator();
void main()
 {
 	Choose_operator();
 }
 void Choose_operator()
 {
 
    int n1,n2,sum,sub,mut,mod,div;
	char ch;
	printf("Please Enter first no. here:");
	scanf("%d",&n1);
	
	printf("Please Enter Second no. here: ");
	scanf("%d",&n2);
	
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
		printf("Your outcome is:%d",sum);
    }
	else if(ch=='-')
	{
		sub = n1-n2;
		printf("Your outcome is:%d",sub);
    }
	else if(ch=='*')
	{
		mut=n1*n2;
		printf("Your outcome is:%d",mut);
    }
	else if(ch=='/')
	{
		div=n1/n2;
		printf("Your outcome is:%d",div);
    }
	else if(ch=='%')
	{
		mod=n1%n2;
		printf("Your outcome is:%d",mod);
    }

}
