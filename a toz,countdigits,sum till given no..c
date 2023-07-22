#include<stdio.h>
void main()
{

/*char a=0;
int num,sum=0;

//sum from 0 to 10//

/*while (a<=10)
{
	sum=sum+a;
	a++;
	
}printf("%d",sum);

// SUM ONLY EVEN NO.//
 
for (num==2 ;num<=10;num++)
 {  if(num%2==0)
	
	sum=sum+num;

	}	printf("%d",sum);


//printing a to z//

for (a='A';a<='Z';a++)
{
	if (a!='R'&& a!='A')
	printf("\n%c \t%d",a,a);

}*/

    // no of digits count//
		int n,count=0;
    	printf("enter the no.");
    	scanf("%d",&n);
//    	for(;n!=0;count++)
//    	{
//    		n=n/10;
//    	    	
//		}
//		
		int digit=(int)log10(n)+1;
	
		printf("digits:%d",digit);
		
}
