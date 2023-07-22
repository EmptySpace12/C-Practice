#include<stdio.h>
//Check Amstrong no. by function type-2//
int amstrong();
void main()
 {
 	int num,a;
 	printf("Enter a no. here : ");
    scanf("%d", &num);

 	a=amstrong();
 	if(a==1)
 	{
	 printf(" is Amstrong Number");
 	}
 	else
 	{
	 printf(" is not  Amstrong Number");
 	}
 	
 }
int amstrong() 
{
    int num, onum, remainder, result = 0;
    
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
	   			result =result+ pow(remainder,n);
				
			}

       //print with if esle//
       
    	if (result == num)
        	{	
				printf("Hey..%d",num);
				return 1;
			
			}
			else
        	{
			printf("Hey..%d",num);
			return 0;
			}
			
}

