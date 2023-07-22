#include <stdio.h>

//Sum of digit and its reverse using sum Function type 4// 
int sum(int);
int reverse(int);
void main()
 {
 	int a,b,n;
    printf("Please Enter Three digit No. Here: ");
	scanf("%d",&n);
	a=sum(n);
	printf("The sum of The Above digits is=%d\n",a);
	
	b=reverse(n);
	printf("The reverse of enter Digits is=%d\n",b);			
 
 }
 int sum(int n)
 {
int r,q,q1,r1,sum;
	 
	
	//main formula//eg..241 ;
	
	r=n%10;//1 
	q=n/10;//24 
	q1=q/10;//2 
	r1=q%10;//4 

	sum=q1+r1+r; 
    printf("The Given Three digit no. is=%d\n",n);  
	return sum;
}
int reverse(int n)
 {
int r,q,q1,r1,sum, reverse;
	 
	
	//main formula//eg..241 ;
	
	r=n%10;//1 
	q=n/10;//24 
	q1=q/10;//2 
	r1=q%10;//4 
    
	reverse = r*100+(r1*10)+q1;//100+40+2=142

    printf("\nThe Given Three digit no. is=%d\n",n);  
	return reverse;
}

