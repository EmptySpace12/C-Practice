#include <stdio.h>
//for Amstrong no. range questions by function type-3  //
void range_amstrong(int,int);
void main() 
{
	int lower,upper;
	printf("Enter Lower and Upper limit Here:");
	scanf("%d %d",&lower ,&upper);

		 range_amstrong(lower,upper);
}
void range_amstrong(int lower,int upper)
{
	
	int num, onum, remainder, result = 0;
    
	int i,n;
	for(num=lower;num<=upper;num++)
	{	 
	result=0;n=0;
        
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
	}
}

