#include <stdio.h>

//Max Number and min.. //
void main()
{
	int i,a[50],n,min,max;

	printf("Enter Size of array:");
	scanf("%d",&n);
	
	printf("Enter your Numbers here You Need to find Max and Min from:\n");
	
	for(i=0;i<n;i++)
	{
	//	printf("Enter your Numbers here:\n ");
		scanf("%d",&a[i]);		
	}
	min=max=a[0];
	for(i=1;i<n;i++)
	{
	if(min>a[i])
	min=a[i];
	if(max<a[i])
	max=a[i];
	}
	printf("minimum of array is : %d",min);
    printf("\nmaximum of array is : %d",max);
	
}


/*
//sum by array using function type 3//

void array(int[] ,int ); 
void main()
{
    int a[50],i,n,sum;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    array(a,n);
}
void array(int a[],int n)
 {
 	int min,max,i;
 	min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];   
		   if(max<a[i])
		    max=a[i];       
    }
    
    printf("minimum of array is : %d",min);
    printf("\nmaximum of array is : %d",max);
 }
 

*/

/*//sum by array using pointer//

void sumbyarray(int [],int*,int*,int*);
void main()
{
    int a[50],i,n,sum,c,d;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    sumbyarray(a,&n,&c,&d);
	printf("minimum of array is : %d",c);
    printf("\nmaximum of array is : %d",d);
     
}

void sumbyarray(int a[],int* n,int* c,int* d)
 {
 	int min,max,i;
 	*d=*c=a[0];
    for(i=1; i<*n; i++)
    {
         if(*c>a[i])
		  (*c)=a[i];   
		   if(*d<a[i])
		    (*d)=a[i];       
    }
    
    }

 
*/
