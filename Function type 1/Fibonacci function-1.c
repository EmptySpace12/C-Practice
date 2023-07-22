#include <stdio.h>

//...........Fibonacci by function type 1....//
void fibonacci();
void main() 
{
	 fibonacci();
}

void fibonacci()
{
  int  i,n;  
  int t1 = 0, t2 = 1;
  int nextTerm;
  nextTerm = t1 + t2;
  printf("Enter the number of terms You want in Series: ");
  scanf("%d",&n);
  printf("Fibonacci Series: %d %d ", t1, t2);

	for(i=3;i<=n;i++)
		{
			printf("%d ", nextTerm);
		    t1 = t2;
		    t2 = nextTerm;
		    nextTerm = t1 + t2;
		    
		}
}

