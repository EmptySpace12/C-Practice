#include <stdio.h>

//...........Fibonacci by Pointer....//

void fibonacci(int*,int*,int*);
void main()
{
	int n;
	printf("Enter the number of terms You want in Series: ");
  	scanf("%d",&n);
  
	  int  i;  
	  int t1 = 0, t2 = 1;
	  int nextTerm;
	  printf("Fibonacci Series: %d %d ", t1, t2);

	for(i=3;i<=n;i++)
		{
			fibonacci(&t1,&t2,&nextTerm); 
		    printf("%d ", nextTerm);
			t1 = t2;
		    t2 = nextTerm;
		    
		}
}
void fibonacci(int* t1,int* t2,int* nextTerm) 
{
	*nextTerm=(*t1)+(*t2);
	
}

