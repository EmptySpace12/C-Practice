#include <stdio.h>
//for Amstrong no. range questions by function type-4  //
int range_amstrong(int);
void main() 
{
	int num,a,lower,upper;
	printf("Enter Lower and Upper limit Here:");
	scanf("%d %d",&lower,&upper);

for(num=lower;num<=upper;num++)
	{	 
    
	a=range_amstrong(num);
	if(a==num)
	 printf("%d ", num);
    
	}
}
int range_amstrong(int num)
{
	
	int  onum, remainder, result = 0;
	int n;
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
	    //	if (result == num)
		    return result;
		//	else
			//return 0;
	
}

