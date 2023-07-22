#include <stdio.h>

//Amstrong no all cases //

void main() 
{
    int num, onum, remainder, result = 0;
    printf("Enter a no. here : ");
    scanf("%d", &num);

//While loops three digit //

    onum = num;
    while (onum!= 0) 
	{
       
        	remainder = onum % 10;
       		result =result + remainder * remainder * remainder;
        
       // reducing no....
       onum =onum/10;
    }

//for loops three digit //
			
			for(onum=num;onum!=0;onum=ounm/10)
			{
				remainder = onum % 10;
       			result =result + remainder * remainder * remainder;
        
			}
		result==num?printf("%d is an Armstrong number.", num):printf("%d is not an Armstrong number.", num);
}
		
// loop  for n no.//

void main() 
{
    int num, onum, remainder, result = 0;
    printf("Enter a no. here : ");
    scanf("%d", &num);

	int n=0;
// no. of digit//

		for(onum=num;onum!=0;n++)
				{	
					onum=onum/10;
				}

//reduce  no.//

		 for(onum=num;num!=0;num=num/10)
			{
				remainder = num % 10;       
	   			result =result+ pow(remainder,n);
				
			}

       /*//print with if esle//
       
    	if (result == num)
        	printf("%d is an Armstrong number.", num);
    	else
        	printf("%d is not an Armstrong number.", num);*/

		result==onum?printf("%d is an Armstrong number.", onum):printf("%d is not an Armstrong number.", onum);

}

//for range questions  //

void main() 
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


//while loop//

			onum=num;
			while (onum!=0)
			{
			    
				remainder = onum % 10;   
	   			result =result+ pow(remainder,n);
				onum=onum/10;
			}

     //printf("%d is an Armstrong number.", result);
	    	if (result == num)
    	    printf("%d ", num);
    		result=0;n=0;
	}
}

//most imp //
//taking both range from user//
//same range but just we need to add swap condition and just change range //

void main() 
{
  int l, h,n, num, onum, remainder,result=0;
  
  printf("Enter two numbers(intervals): ");
  scanf("%d %d", &l, &h);
  printf("Armstrong numbers between %d and %d are: ", l, h);

  // swap numbers if high < low //
  
  if (h < l)
   {
  	
    h += l;
    l = h - l;
    h -= l;
  }
   //range alot//
  for (num = l + 1; num< h; num++) 
  	{
  	  onum = num;
      while (onum != 0) {
      onum /= 10;
      n++;
	}

    onum = num;

    // result contains sum of nth power of individual digits
    while (onum!= 0) 
	{
      remainder = onum % 10;
      result += pow(remainder,n);
      onum=onum/10;
    }

    if (result == num) 
	{
      printf("%d ", num);
    }
    
    result = 0;n=0;
  }
  
}

