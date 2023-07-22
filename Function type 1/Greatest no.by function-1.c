#include <stdio.h>

// greatest of three no. by Function type 1 // 
void Greatestnum();
void main()
 {
 	Greatestnum();
 }
 void Greatestnum()
 {
 
    int n1,n2,n3;
	printf("Hey...Please Enter Integer  Below\n");
	printf("\nPlease Enter first no. here ");
	scanf("%d",&n1);
	
	printf("Please Enter Second no. here ");
	scanf("%d",&n2);


	printf("Please Enter Third no. here ");
	scanf("%d",&n3);	
		if(n1>n2)
    	{
    		
			if (n1>n3)   
   			printf("The greatest no. is %d",n1);
   			else
   			printf("The greatest no. is %d",n3);
   			
   	
		}
		
		else
		{
		      
		    if(n2>n3)   
   		    printf("The greatest no. is %d",n2);
   			else
   			printf("The greatest no. is %d",n3);
		
		}
}
