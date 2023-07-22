#include <stdio.h>
//for Amstrong no. range questions by pointer  //
void range_amstrong(int*,int*);
void main() 
{
	int a,num,lower,upper,result;
	printf("Enter Lower and Upper limit Here:");
	scanf("%d %d",&lower,&upper);
	printf("\nHEY..Amstrong Number for Your Entered Range are:");
	
for(num=lower;num<=upper;num++)
	{	 
  	result=0;
	range_amstrong(&num,&result);
		if(result==num)
		{	
	 printf("%d ",result);
		}
	}
}
void range_amstrong(int* num,int* result)
{
	
	int  onum, remainder;
	int n;
	n=0;
	//*result=0;
		
// no. of digit//		
		for(onum=*num;onum!=0;n++)
				{	
					onum=onum/10;
				}

		//reduce  no.//

//for loop//	
	 		for(onum=*num;onum!=0;onum=onum/10)
			{
				remainder = onum % 10;
            //result =result + remainder * remainder * remainder;
       
	   			(*result) =(*result)+pow(remainder,n);
				
			}

     //printf("%d is an Armstrong number.", result);
	    //	if (result == num)
//		    return result;
		//	else
			//return 0;
	
}

