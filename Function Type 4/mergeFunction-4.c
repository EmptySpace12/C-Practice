

#include <stdio.h>

// Menu:merge program Function type 4// 
int evenodd(int);
int totalsalary(int);
int choose_operator(int,int);

void main()
 {  
		int a,b,c,ch,num,n,n1,n2;
        printf("\n ....Hey This is our Menu!...\n ");
		printf("\n 1.Even Odd ");
		printf("\n 2.Total Salary ");
		printf("\n 3.Asking Two Number & Operator");
		printf("\nPlease enter your choice here:");
		scanf("%d",&ch);

 
 	if(ch==1)
 	{
		printf("Please Enter No. Here: ");
		scanf("%d",&num);
		a=evenodd(num);
		if(a==1)
		printf("         And\n The Given no. is Even\n");
		else
		printf("         And\n The Given no. is odd\n");
						
	 }
	 if(ch==2)
	 {
	 	printf("\nPlease Enter Your Salary here: ");
		scanf("%d",&n);
		b=totalsalary(n);
		printf("%d",b);

	 }
 	if(ch==3)
 	{
		printf("Please Enter first no. here: ");
		scanf("%d",&n1);
	
		printf("Please Enter Second no. here: ");
		scanf("%d",&n2);
 		
		c=choose_operator(n1,n2);
 		printf("Your outcome is:%d",c);
    			
	 }
}
 
    
//Even odd//
int evenodd(int num)
{
//int num;
	
	
			printf("Hey Your Entered NO. is:%d\n",num);
				if (num%2==0)
 			   	{
 			   		return 1;
    			}
   				else   
   				{	
    				return 0;	
				}
}
//salary //
int totalsalary(int n)
{
	int tl,tm;
	
	//Main formula//
	
			tl=n+n*0.1+n*0.2+n*0.25;		// less than 5000
			tm=n+n*0.15+n*0.25+n*0.3;		// more than 5000
	
			printf("Hey Your Entered basic Salary is:%d\n",n);	
	
				if (n<=5000)
    			{
    				printf("Your Total salary is= ");
    				return tl;
				}	
   				else   
   				{	
    				printf("Your Total salary is= ");
    				return tm;

   				}		
}

// two no. and operator//
int choose_operator(int n1,int n2)
{
	int sum,sub,mul,mod,div;
	
			char hi;
	
			/*printf("\n 1.  addition ");
			printf("\n 2.  subtraction ");
			printf("\n 3.  multiplication ");
			printf("\n 4.  division");
			printf("\n 5.  Modulus ");*/
		
			fflush(stdin);
			printf("Please Enter operator here: ");
			scanf("%c",&hi);

				if(hi=='+')
				{	
					sum = n1+n2;
					return sum;
				}
					
				else if(hi=='-')
				{
					sub = n1-n2;
					return sub;
			    }
			    else if(hi=='*')
				{
					mul = n1*n2;
					return mul;
			    }
			    else if(hi=='%')
				{
					mod = n1%n2;
					return mod;
			    }
			    else if(hi=='/')
				{
					div = n1/n2;
					return div;
			    }
}









