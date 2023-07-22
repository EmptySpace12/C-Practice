#include <stdio.h>

//Total salary Function type 4// 
int totalsalary(int);
void main()
{
	int a,n;
	printf("Please Enter Your Salary here:  ");
	scanf("%d",&n);
	
	a=totalsalary(n);
	printf("            And  \nYour Total salary is=%d\n",a);
		
}
int totalsalary(int n)
{
	int tl,tm;

	
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
