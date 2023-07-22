#include<stdio.h>
// Factorial//
void main()
{
	int n,i=1,f=1;
	printf("Enter Your NO. here ...");
	scanf("%d",&n);
	

    // With for loop//
    
/*	for(i=1;i<=n;i++)
	  {
	  	
		f=f*i;
	  }
	  	  
	printf("\n Hey..\n     Factorial of %d is %d:",n,f);
*/
	//with while loop//

	while(i<=n)
	{
       	f=f*i;
		      
		i++;
	}
    printf("      Hey..\nFactorial of %d is %d:",n,f);
}



