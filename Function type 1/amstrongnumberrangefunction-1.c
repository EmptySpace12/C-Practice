#include <stdio.h>
//for Amstrong no. range questions by function type-1  //
void range_amstrong();
void main() 
{
		 range_amstrong();
}
void range_amstrong()
{
	
	int num, onum, remainder, result = 0;
    
	int i,n;

	for(num==1;num<=2000;num++)
	{	 
        
		
// no. of digit//		
		for(onum=num;onum!=0;n++)
				{	
					onum=onum/10;
				}

		//reduce  no.//

//for loop//	
	 		for(onum=num;onum!=0;onum=onum/10)
			{
				remainder = onum % 10;
            //result =result + remainder * remainder * remainder;
       
	   			result =result+ pow(remainder,n);
				
			}


     //printf("%d is an Armstrong number.", result);
	    	if (result == num)
    	    printf("%d ", num);
    		result=0;n=0;
	}
}

