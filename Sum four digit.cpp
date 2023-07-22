#include <stdio.h>
//sum four  digit no//
int main()
 {
    int a,r,q,r1,q1,r2,q2,ans;
    a=5667;
    q=a/10;//566
    r=a%10;//7..
    r1=q%10;//6..
    q1=q/10;//56
    r2=q1%10;//6...
    q2=q1/10;//5.......
    ans=q2+r2+r1+r;
	printf("%d", ans);
	return 0;
	
 	
}
