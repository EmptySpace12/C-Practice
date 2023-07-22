#include <stdio.h>
//perfect no. range ask for both range by Pointer//
void perfect_range(int*,int*);
void main()
{
	int a,i,low,end;
	printf("Enter upper and Lower limit: ");
    scanf("%d %d", &low ,&end);
	printf("All Perfect numbers between % to %d:\n",low, end);
   
	for(i=low; i<=end; i++)
    {
	perfect_range(&i,&a);
	if(a==i)
	printf(" %d\t",i);
	}

}
void perfect_range(int* i,int* sum)
 {
 
    int  j;
    
    *sum = 0;
 //condition//
       
        for(j=1; j<*i; j++)
        {
            if((*i)% j == 0)
            {
                (*sum) += j;
            }
        }
 
       

 }

