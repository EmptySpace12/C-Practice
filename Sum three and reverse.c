#include <stdio.h>

//Sum of digit and its reverse // 

//void main()
// {
//    int r,q,q1,r1,n,sum, reverse;
//	printf("Please Enter Three digit No. Here");
//	scanf("%d",&n);
//	
//	//main formula//eg..241 ;
//	
//	r=n%10;//1 
//	q=n/10;//24 
//	q1=q/10;//2 
//	r1=q%10;//4 
//
//	sum=q1+r1+r; 
//
//    reverse = r*100+(r1*10)+q1;//100+40+2=142
//
//    printf("The Given Three digit no. is=%d\n",n);  
//    printf("The reverse of enter Digits is=%d",reverse);
//	printf("The sum of The Above digits is=%d\n",sum);
//			
//}


void main() 
{
  int l, h,n, num, onum, remainder,result=0;
  
  printf("Enter two numbers(intervals): ");
  scanf("%d %d", &l, &h);
  printf("Armstrong numbers between %d and %d are: ", l, h);

  // swap numbers if high < low //
  
  if (h < l)
   {
  	
    h += l;
    l = h - l;
    h -= l;
  }
   //range alot//
  for (num = l; num< h; num++) 
  	{
  	  onum = num;
      while (onum != 0) {
      onum /= 10;
      n++;
	}

    onum = num;

    // result contains sum of nth power of individual digits
    while (onum!= 0) 
	{
      remainder = onum % 10;
      result += pow(remainder,n);
      onum=onum/10;
    }

    if (result == num) 
	{
      printf("%d ", num);
    }
    
    result = 0;n=0;
  }
  
}

