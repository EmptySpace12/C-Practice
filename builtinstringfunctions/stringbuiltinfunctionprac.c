#include <stdio.h>
#include <string.h>
//all built in String functions

void main() 

{
	
	int ch;
	char s1[100] = "FirstBit";
	char s2[100] = "Firstbit";
	puts(s1);
	puts(s2);
	printf("...Your Menu...");
  	printf("\n1 for Knowing Length of String");
  	printf("\n2 for Comparing Strings");
  	printf("\n3 for Concatenating String");
  	printf("\n4 for Copying String");
  	printf("\n5 for Printing from occurence of that Charachter in String");
  	printf("\n6 for non Case Sensitive Comparing String");
  	printf("\n7 for Uppercaseing String");
  	printf("\n8 for Lowercasing String");
  	printf("\n9 for Reversing String\n");
  	scanf("%d",&ch);
	//strlen()
	if(ch==1)
	{
	printf("....For Strlen()...");
  	printf("\nLength of string ''%s'' : %d", s1,strlen(s1));//its also counting space
	
//for n
	printf("\n....For Strnlen()...");
	printf("\nLength of string ''%s'' : %d",s1,strnlen(s1, 4));//strn not str
}
if(ch==2)
	{
	
//strcmp()
	printf("\n....For Strcmp()....");
	  if (strcmp(s1,s2)==0)
	  {
	  	printf("\nThe Strings Are Equal");
	  }
	  else
	  	printf("\nThe Strings Are Not Equal");

//for n  
	printf("\n....For Strncmp()....");
	  if(strncmp(s1,s2,4) ==0)
	  {
	  	printf("\nThe Strings Are Equal");
	  }
	  else
	  	printf("\nThe Strings Are Not Equal");
  
}
if(ch==3)
	{
	
	//char r[10]="Hello";
	//char z[10]="Ravi";
	
//strcat()
	
	printf("\n....For Strcat()....");
	strcat(s1,s2);
	printf("\nThe New s1 is %s",s1);

//strncat
	
	printf("\n....For Strncat()....");
	strncat(s1,s2,1);
	printf("\nThe New s1 is %s",s1);
}
if(ch==4)
	{
	
//strcpy
	//char f[100]="Namaste";
	//char i[100]="India";

	printf("\n....For Strcpy()....");
	strcpy(s1,s2);
	printf("\nThe New s1 is %s",s1);

//strncpy

	printf("\n....For Strncpy()....");
	strncpy(s1,s2,5);
	printf("\nThe New s1 is %s",s1);
}
if(ch==5)
	{
	
//strchr......it takes string and char as input ..for first occurence

	printf("\n....For Strchr()....");
//	char hrr[100]= "hellos bye see";
	printf("\nThe New s1 is %s",strchr(s1,'l'));// op=llos bye see
	
//strrchr...last occurence se output 

	printf("\n....For Strrchr()....");
	printf("\nThe New s1 is %s",strrchr(s1,'l'));//op=los bye see
}


//strcasecmp () or stricmp both are same Compare with case sensitivity//

if(ch==6)
	{
		
	//char st1[70] = "STrING";
  	//char st2[70]= "string";
  	int result;
printf("\n....For Strcasecmp()....");
	result = stricmp(s1, s2);
  if (result == 0)
    printf("\nStrings are equal.\n");
    
  else if (result < 0)
    printf("\n %s is less than %s", s1, s2);
    
  else
    printf("\n %s is greater than %s", s1, s2);
}

//uppercase

	//strupr(s2);
if(ch==7)
	{
		
	printf("\n....For Strupr()....");
	printf("\nYour String in Uppercased %s",strupr(s2));
}
//lowerupr(s2);
if(ch==8){

	printf("\n....For Strlwr()....");
	printf("\nYour String in Lowercased :%s",strlwr(s1));
}

//Reverse
if(ch==9)
	{
	
	printf("\n....For Strrev()....");
	printf("\nYour String in Reversed %s",strrev(s2));
}
}
