#include<stdio.h>
//Check Amstrong no. by function type-4//
int amstrong(int);
void main()
 {
 	int a,num;
 	printf("Enter a no. here : ");
    scanf("%d", &num);

	a=amstrong(num);
	if(a==1)
 	printf(" is an Armstrong number.");
 	else
 	printf(" is not an Armstrong number.");
		
 
 }
int amstrong(int num) 
{
    int onum, remainder, result = 0;
    
	int n=0;
// no. of digit//

		for(onum=num;onum!=0;n++)
				{	
					onum=onum/10;
				}

//reduce  no.//

		 for(onum=num;onum!=0;onum=onum/10)
			{
				remainder = onum % 10;       
	   			result =result+pow(remainder,n);
				
			}

       //print with if esle//
           	if (result == num)
        	{
			printf("%d",num);
			return 1;
	    	}
			else
	    	{
			printf("%d",num);
        	return 0;
        	}
}

