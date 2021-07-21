#include<stdio.h>
#include<string.h>

int main()
{ 
char s1[20];
int i,l,flag=0;
printf("Enter a string : ");
gets(s1);
l=strlen(s1);
for(i=0;i<1;i++)
if(s1[i]!=s1[l-i-1])
{
flag=1;
break;
}
if (flag)
printf("The given string is not a Palindrome");
else
printf("The given string is a Palindrome");
return 0;
}
