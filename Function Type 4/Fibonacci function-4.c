#include <stdio.h>

//...........Fibonacci by function type 4....//
//its not the best way to solve...but trying to solve it by type 4

int fibonacci(int,int);
void main()
{
	int n,nextTerm;
	printf("Enter the number of terms You want in Series: ");
  	scanf("%d",&n);
  
	  int  i;  

	for(i=3;i<=n;i++)
		{
			printf("%d ", nextTerm);
		    t1 = t2;
		    t2 = nextTerm;
		    nextTerm =fibonacci(t1,t2); 

			
		}
}
int fibonacci(int t1,int t2) 
{

	int c;
		  int t1 = 0, t2 = 1;
	  int nextTerm;
	  nextTerm = t1 + t2;
	  printf("Fibonacci Series: %d %d ", t1, t2);

	c=t1+t2;
	return c;
}

