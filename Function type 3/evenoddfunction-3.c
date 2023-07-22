#include <stdio.h>

//Check evev or odd Function type 3 // 
void evenodd(int);
void main()
 {
 	int n;
	printf("Please Enter No. Here ");
	scanf("%d",&n);

 	evenodd(n);
 }
void evenodd(int n)
{

	
	
	printf("Hey Your Entered NO. is:%d\n",n);	
	
		if (n%2==0)
    	{
    		printf("         And\n The Given no. is Even\n");
		}
   		else   
   		{	
    		printf("          And\n The Given no. is odd");
   		}		
}
