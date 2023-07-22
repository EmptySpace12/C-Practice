#include <stdio.h>

//Check evev or odd Function type 4 // 
int evenodd(int);
void main()
 {
 	int a,n;
	printf("Please Enter No. Here ");
	scanf("%d",&n);
 	a=evenodd(n);
 	if(a==1)
 	printf("         And\n The Given no. is Even\n");
 	else
 	printf("          And\n The Given no. is odd");
   		
 }
 
int evenodd(int n)
{
	printf("Hey Your Entered NO. is:%d\n",n);	
	
		if (n%2==0)
    	{
    		return 1;
		}
   		else   
   		{	
   			return 0;
    	}		
}
