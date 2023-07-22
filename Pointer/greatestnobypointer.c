#include <stdio.h>

// greatest of three no. by Pointer // 
void Greatestnum(int*,int*,int*,int*);
void main()
 {
 	int a;
    int n1,n2,n3;
	printf("Hey...Please Enter Integer  Below\n");
	printf("\nPlease Enter first no. here ");
	scanf("%d",&n1);
	
	printf("Please Enter Second no. here ");
	scanf("%d",&n2);

	printf("Please Enter Third no. here ");
	scanf("%d",&n3);	

 	Greatestnum(&n1,&n2,&n3,&a);
 	printf("The greatest no. is %d",a);
   	
 }
 void Greatestnum(int* n1,int* n2,int* n3,int* a)
 {
 
		if(*n1>*n2)
    	{
    		
			if (*n1>*n3)   
   				*a=*n1;
   			else
   				*a=*n3;
   			
		}
		
		else
		{
		      
		    if(*n2>*n3)   
   		   	*a=*n2;
   			
		  	else
  			*a=*n3;
   			
		}
}
