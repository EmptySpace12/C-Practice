#include <stdio.h>

//Sum of digit and its reverse using sum Function type 3// 
void sum_reverse(int);
void main()
 {
 	int n;
    printf("Please Enter Three digit No. Here: ");
	scanf("%d",&n);

   sum_reverse(n);	
 }
 void sum_reverse(int n)
 {
int r,q,q1,r1,sum, reverse;
	 
	
	//main formula//eg..241 ;
	
	r=n%10;//1 
	q=n/10;//24 
	q1=q/10;//2 
	r1=q%10;//4 

	sum=q1+r1+r; 

    reverse = r*100+(r1*10)+q1;//100+40+2=142

    printf("The Given Three digit no. is=%d\n",n);  
	printf("The sum of The Above digits is=%d\n",sum);
	printf("The reverse of enter Digits is=%d\n",reverse);			
}

