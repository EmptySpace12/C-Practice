#include <stdio.h>

//Sum of digit and its reverse using sum Function type 2// 
int sum();
int reverse();
void main()
 {
 	int a,b;
   	a=sum();
   	printf("The Sum of Your Entered Number is=%d\n",a);  
	b=reverse();
   	printf("The Reverse of Your Entered Number is=%d\n",b);  
		
 }
 int sum()
 {
 
    int r,q,q1,r1,n,sum;
	printf("Please Enter Three digit No. Here: ");
	scanf("%d",&n);
	
	
	
	r=n%10; 
	q=n/10; 
	q1=q/10; 
	r1=q%10; 

	sum=q1+r1+r; 
    printf("The Given Three digit no. is=%d\n",n);  
	return sum;
			
}
int reverse()
{
	int r,q,q1,r1,n,reverse;
	printf("\nPlease Enter The Above Three digit No. Here Again for Reversing : ");
	scanf("%d",&n);
	
	r=n%10; 
	q=n/10; 
	q1=q/10; 
	r1=q%10; 
	reverse = r*100+(r1*10)+q1;
	return reverse;
}
