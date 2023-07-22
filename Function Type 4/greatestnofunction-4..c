#include <stdio.h>

// greatest of three no. by Function type 4 // 
int Greatestnum(int,int,int);
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

 	a=Greatestnum(n1,n2,n3);
 	printf("The greatest no. is %d",a);
   	
 }
 int Greatestnum(int n1,int n2,int n3)
 {
 
		if(n1>n2)
    	{
    		
			if (n1>n3)   
   			return n1;
			else
   			return n3;
   	
		}
		
		else
		{
		      
		    if(n2>n3)   
   		    return n2;
			else
   			return n3;
		}
}
