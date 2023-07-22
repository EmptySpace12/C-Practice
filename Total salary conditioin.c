#include <stdio.h>

//Basic salary// 

void main()
 {
    int tl,tm,n;

	printf("Please Enter Your Salary here:  ");
	scanf("%d",&n);
	
	//Main formula//
	
	tl=n+n*0.1+n*0.2+n*0.25;		// less than 5000
	tm=n+n*0.15+n*0.25+n*0.3;		// more than 5000
	
	printf("Hey Your Entered basic Salary is:%d\n",n);	
	
		if (n<=5000)
    	{
    		printf(" And Hey Your Total salary is=%d\n",tl);
		}
   		else   
   		{	
    		printf("            And  \nYour Total salary is=%d\n",tm);
   		}		
}
