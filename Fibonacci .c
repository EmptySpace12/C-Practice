#include <stdio.h>

//...........Fibonacci All cases....//

void main() {

p  int  i,n;  
  int t1 = 0, t2 = 1;
  int nextTerm;
  nextTerm = t1 + t2;
  printf("Enter the number of terms You want: ");
  scanf("%d",&n);


  printf("Fibonacci Series: %d %d ", t1, t2);

	i=3;
 
 // for loop for till that no.. means 10 so it will print max value till 10//
 
	  for (nextTerm=1; nextTerm<= n; ) 
		  	{
		    printf("%d, ", nextTerm);
		    t1 = t2;
		    t2 = nextTerm;
		    nextTerm = t1 + t2;
		  	}
  

// while loop for till that no.. means 10 so it will print max value till 10//

		while(nextTerm<=n)
		{    
		    printf("%d, ", nextTerm);
		    t1 = t2;
		    t2 = nextTerm;
		    nextTerm = t1 + t2;
		    
		}
// while loop to print till n number means 10 bola hai so 10 no. tak execute it //

	while(i<=n)
		{    
			printf("%d ", nextTerm);
		    t1 = t2;
		    t2 = nextTerm;
		    nextTerm = t1 + t2;
		    i++;
		}
// for  loop to print till n number means 10 bola hai so 10 no. tak execute it //

	for(;i<=n;i++)
		{
			printf("%d ", nextTerm);
		    t1 = t2;
		    t2 = nextTerm;
		    nextTerm = t1 + t2;
		    
		}
}

