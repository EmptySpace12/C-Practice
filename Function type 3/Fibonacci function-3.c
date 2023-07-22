#include <stdio.h>

//...........Fibonacci by function type 3....//
void fibonacci(int);
void main() 
{
	int n;
	printf("Enter the number of terms You want in Series: ");
  	scanf("%d",&n);
  
	fibonacci(n);
}

void fibonacci(int n)
{
  int  i;  
  int t1 = 0, t2 = 1;
  int nextTerm;
  nextTerm = t1 + t2;
  printf("Fibonacci Series: %d %d ", t1, t2);

	for(i=3;i<=n;i++)
		{
			printf("%d ", nextTerm);
		    t1 = t2;
		    t2 = nextTerm;
		    nextTerm = t1 + t2;
		    
		}
}

