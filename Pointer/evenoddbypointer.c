#include <stdio.h>

//Check evev or odd by pointer // 
void evenodd(int *);

void main()
 {
 	int n,r;
	printf("Please Enter No. Here ");
	scanf("%d",&n);
	printf("Hey Your Entered NO. is:%d\n",n);	
	
 	evenodd(n);
 	
 }
void evenodd(int &n)
{
	int r=1;
	
		if (n%2==0)
    	{
    		r=0;
		}
		if(r==0)
 		printf("Hey Your Enter No. is Even ");
		else
		printf("Hey Your Enter No. is Odd ");
	
		
}
