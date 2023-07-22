//#include<stdio.h>
////reverse userbased//
//char* reverse(char*,char*);
//void main()
//{
//	char a[100];
//	char b[100];
//	char* c,i;
//	
//	puts("Enter Your Stirng Here:");
//	scanf("%[^\n]s",&a);
//	c=reverse(a,b);
//	for(i=0;b[i]!='\0';i++)
//	{
//		printf("%c",b[i]);	
//
//	}
//	
//}
//char* reverse(char* a,char*b)
//{
//	int i,j;
//for(i=0;a[i]!='\0';i++);
////i--;
//printf("%d",i); 
//for(j=0;i>=0;j++)
//{
//	b[j]=a[i];
//	i--;
//}
//b[j]='\0';
//printf("%s",b);
//return b;
//}


//Another method with explaination//

#include <stdio.h>
int main()
{
   char s[1000], r[1000];
   int begin, end, count = 0;

   printf("Input a string\n");
   gets(s);

   // Calculating string length

   while (s[count] != '\0')
      count++;

   end = count - 1;

   for (begin = 0; begin < count; begin++) {
      r[begin] = s[end];
      end--;
   }

   r[begin] = '\0';

   printf("%s\n", r);

   return 0;
}
