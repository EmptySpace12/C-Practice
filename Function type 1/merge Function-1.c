#include <stdio.h>

// Menu:merge program Function type 1// 

//just trying to use multiple  function call// 
//we can direct all below in one function// 
void evenodd();
void menu();
void totalsalary();
void choose_operator();

void main()
 {  menu();
 	evenodd();
 	totalsalary();
 	choose_operator();
 }
 void menu()
 {
 
    int n1,n2,sum,sub,mul,mod,div,ch,tl,tm,num,n;
        printf("\n ....Hey This is our Menu!...\n ");
		printf("\n 1.Even Odd ");
		printf("\n 2.Total Salary ");
		printf("\n 3.Asking Two Number & Operator");
		printf("\nPlease enter your choice here:");
		scanf("%d",&ch);
}
//Even odd//
void evenodd()
{
int num,ch;
	if (ch==1)
		{          
			printf("Please Enter No. Here: ");
			scanf("%d",&num);
	
	
			printf("Hey Your Entered NO. is:%d\n",num);
				if (num%2==0)
 			   	{
    				printf("         And\n The Given no. is Even\n");
				}
   				else   
   				{	
    				printf("          And\n The Given no. is odd");
   				}

		}
}
//salary //
void totalsalary()
{
	int tl,tm,n,ch;
	if(ch==2)
	
		{		
			printf("\nPlease Enter Your Salary here: ");
			scanf("%d",&n);
	
	//Main formula//
	
			tl=n+n*0.1+n*0.2+n*0.25;		// less than 5000
			tm=n+n*0.15+n*0.25+n*0.3;		// more than 5000
	
			printf("Hey Your Entered basic Salary is:%d\n",n);	
	
				if (n<=5000)
    			{
    				printf("Your Total salary is=%d\n",tl);
				}	
   				else   
   				{	
    				printf("Your Total salary is=%d\n",tm);
   				}		
		}
}
// two no. and operator//
void choose_operator()
{
	int n1,n2,sum,sub,mul,mod,div,ch;
	
	if(ch==3)
		{
			char hi;
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
			scanf("%c",&hi);

				if(hi=='+')
				{	
					sum = n1+n2;
					printf("Your outcome is:%d",sum);
    			}
				else if(hi=='-')
				{
					sub = n1-n2;
					printf("Your outcome is:%d",sub);
			    }
			    else if(hi=='*')
				{
					mul = n1*n2;
					printf("Your outcome is:%d",mul);
			    }
			    else if(hi=='%')
				{
					mod = n1%n2;
					printf("Your outcome is:%d",mod);
			    }
			    else if(hi=='/')
				{
					div = n1/n2;
					printf("Your outcome is:%d",div);
			    }
			}
}




