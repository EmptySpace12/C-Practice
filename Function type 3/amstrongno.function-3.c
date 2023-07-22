#include<stdio.h>
//Check Amstrong no. by function type-3//
void amstrong(int);
void main()
 {
 	int num;
 	printf("Enter a no. here : ");
    scanf("%d", &num);

	amstrong(num);
 	
 }
void amstrong(int num) 
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
        	printf("%d is an Armstrong number.", num);
    	else
        	printf("%d is not an Armstrong number.", num);
		
}

