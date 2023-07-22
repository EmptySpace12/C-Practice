#include <stdio.h>

// TWO NO WITH OPERATOR. by Function type 2// 
int Choose_operator();
void main()
 {
 	int a;
 	a=Choose_operator();
 	printf("%d",a);
	
 }
 int Choose_operator()
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
		printf("Sum of Above Numbers is: ");
  		return sum;
		
    }
	else if(ch=='-')
	{
		sub = n1-n2;
		printf("Sub of Above Numbers is: ");
		return sub;
	}
	else if(ch=='*')
	{
		mut=n1*n2;
		printf("Multiplication of Above Numbers is: ");
		return mut;
		
    }
	else if(ch=='/')
	{
		div=n1/n2;
		printf("Divison of Above Numbers is: ");
		return div;   
    }
    
	else if(ch=='%')
	{
		mod=n1%n2;
		printf("Modulus of Above Numbers is: ");
    	return mod;
	}

}
