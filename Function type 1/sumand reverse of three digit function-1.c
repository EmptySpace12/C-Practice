#include <stdio.h>

//Sum of digit and its reverse using sum Function type1// 
void sum_reverse();
void main()
 {
   sum_reverse();	
 }
 void sum_reverse()
 {
 
    int r,q,q1,r1,n,sum, reverse;
	printf("Please Enter Three digit No. Here: ");
	scanf("%d",&n);
	
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

