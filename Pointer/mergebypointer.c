

#include <stdio.h>

// Menu:merge program by Pointer// 
void evenodd(int*,int*);
void totalsalary(int*,int*);
void choose_operator(int*,int*,int*);

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
		evenodd(&num,&a);
		if(a==1)
		printf("         And\n The Given no. is Even\n");
		else
		printf("         And\n The Given no. is odd\n");
						
	 }
	 if(ch==2)
	 {
	 	printf("\nPlease Enter Your Salary here: ");
		scanf("%d",&n);
		totalsalary(&n,&b);
		printf("Hey Your Entered basic Salary is:%d\n",n);	
		printf("Your Total salary is= ");
		printf("%d",b);
					

	 }
 	if(ch==3)
 	{
		printf("Please Enter first no. here: ");
		scanf("%d",&n1);
	
		printf("Please Enter Second no. here: ");
		scanf("%d",&n2);
 		
		choose_operator(&n1,&n2,&c);
 		printf("Your outcome is:%d",c);
    			
	 }
}
 
    
//Even odd//
void evenodd(int* num,int* a)
{
//int num;
	
	
			printf("Hey Your Entered NO. is:%d\n",&num);
				if ((*num)%2==0)
 			   	{
 			   		*a=1;
    			}
}
//salary //
void totalsalary(int* n,int* b)
{
	int tl,tm;
	
	//Main formula//
	
			tl=(*n)+(*n)*0.1+(*n)*0.2+(*n)*0.25;		// less than 5000
			tm=(*n)+(*n)*0.15+(*n)*0.25+(*n)*0.3;		// more than 5000
	
			
				if (*n<=5000)
    			{
    				*b=tl;
				}	
   				else   
   				{	
    				*b=tm;
   				}		
}

// two no. and operator//
void choose_operator(int* n1,int* n2,int* c)
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
					sum = (*n1)+(*n2);
					*c=sum;
				}
					
				else if(hi=='-')
				{
					sub = (*n1)-(*n2);
					*c=sub;
			    }
			    else if(hi=='*')
				{
					mul = (*n1)*(*n2);
					*c=mul;
			    }
			    else if(hi=='%')
				{
					mod = (*n1)%(*n2);
					*c=mod;
			    }
			    else if(hi=='/')
				{
					div = (*n1)/(*n2);
					*c=div;
			    }
}









