#include <stdio.h>

// gratest of three no. using logic// 

void main()
 {
    int n1,n2,n3;

	printf("Please Enter first no. here ");
	scanf("%d",&n1);
	
	printf("Please Enter Second no. here ");
	scanf("%d",&n2);


	printf("Please Enter Third no. here ");
	scanf("%d",&n3);	
		if(n1>n2 && n1>n3)
    	{
      		
		    printf("The greatest no. is %d",n1);
     	}
		else 
		{
				
			if (n2>n1 && n2>n3)
			printf("The greatest no. is %d",n2);
			else 
			printf("The greatest no. is %d",n3);
		    
		}
		
}
