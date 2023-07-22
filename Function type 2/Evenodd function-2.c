#include <stdio.h>

//Check evev or odd Function type2 // 
int evenodd();
void main()
 {
 	int x;
 	x=evenodd();
 		if(x==1)
		 {
    		printf("         And\n The Given no. is Even\n");
		}
   		else   
   		{	
    		printf("          And\n The Given no. is odd");
   		}		
}
 
int evenodd()
{ 

    int n;
	printf("Please Enter No. Here ");
	scanf("%d",&n);
	
	
	printf("Hey Your Entered NO. is:%d\n",n);	

		/*if (n%2==0)
    	{
    		return 1;
		}
   		else   
   		{	
		   return 0;
		}*/
		return (n%2==0)?1:0;
		
				
}
