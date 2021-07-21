#include<stdio.h>
#include<string.h>
int main()
{ char s1[200];
int i,l;
int v=0,c=0,d=0,b=0,sc=0;
printf("Enter a string : ");
gets(s1);
l=strlen(s1);
for(i=0;i<l;i++)
{
if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]
=='O'||s1[i]=='U')
v++;
else if(s1[i]>='a'&& s1[i]<='z')
c++;
else if(s1[i]>='0'&& s1[i]<='9')
d++;
else if(s1[i]==' ')
b++;
else sc++;}
printf("Vowels : %d\n",v);
printf("Consonants : %d\n",c);
printf("Digits : %d\n",d);
printf("Blanks : %d\n",b);
printf("Special characters : %d\n",sc);
return 0;
}
