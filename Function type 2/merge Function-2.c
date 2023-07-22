#include <stdio.h>

// Menu:merge program Function type 2// 
int  menu();
int evenodd();
int  totalsalary();
int choose_operator();

int main()
{  	
		int ch;
		ch=menu();
//retrun type se bhi and directly void likh ke just down statement se aslo it will execute//
		/*{
		printf("\nPlease enter your choice here:");
		scanf("%d",&ch);
		}
		*/
		int a,b,c;
		
		if(ch==1)	
			{
		 	a=evenodd();
		 			{
						if(a==1)
						{
		    				printf("         And\n The Given no. is Even\n");
						}
		   				else   
		   				{	
		    				printf("          And\n The Given no. is odd");
		   				}
		   			}
		}
		else if(ch==2)
		 	{
			 b=totalsalary();
			 printf("Your Total salary is=%d\n",b);
		}
		else if(ch==3){
			
		 	c=choose_operator();
		 	printf("%d",c);
		}
}
 
int menu() 
	{
		    int ch;
        printf("\n ....Hey This is our Menu!...\n ");
		printf("\n 1.Even Odd ");
		printf("\n 2.Total Salary ");
		printf("\n 3.Asking Two Number & Operator");
printf("\nPlease enter your choice here:");
		scanf("%d",&ch);
		
return ch;		
		}
//Even odd//
int evenodd()
{
int num,ch;
     
			printf("Please Enter No. Here: ");
			scanf("%d",&num);
	
	
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
int totalsalary()
{
	int tl,tm,n,ch;
			printf("\nPlease Enter Your Salary here: ");
			scanf("%d",&n);
	
	//Main formula//
	
			tl=n+n*0.1+n*0.2+n*0.25;		// less than 5000
			tm=n+n*0.15+n*0.25+n*0.3;		// more than 5000
	
			printf("Hey Your Entered basic Salary is:%d\n",n);	
	
				if (n<=5000)
    			{
    				return tl;
				}	
   				else   
   				{	
    				return tm;

				}		
		
}
// two no. and operator//
int choose_operator()
{
	int n1,n2,sum,sub,mut,mod,div;
	
			char ch;
			printf("Please Enter first no. here: ");
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



