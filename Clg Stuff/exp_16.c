#include<stdio.h>

int main()
{
char arr[30],s1[10],s2[10],s3[3];
int opt , i=0, j,len=0;
printf("Select Any Option\n\n");
printf("1:Find out the length of the string\n");
printf("2:Concatenate of the two string\n");
printf("3:Reverse of the string\n");
printf("4:String copying\n");
printf("Enter the choice: ");
scanf("%d",&opt);

switch(opt)
{
case 1:
{ printf("\nFind out the length of the string\n");
printf("Enter any string: \n");
scanf("%s",arr);
for(i=0;arr[i]!='\0';i++);
printf("The length of the string=%d",i);
break;}

case 2:
{ printf("\nString Concatenation\n");
printf("Enter the first string: \n");
scanf("%s",s1);
printf("Enter the second string: \n");
scanf("%s",s2);
for(i=0;s1[i]!='\0';i++)
{ s3[i]=s1[i];}
{
s3[i]='\0';
}
for(j=0;j<=i;j++)
{
s3[i+j]=s2[j];
}
printf("\nThe Concatenated string=%s",s3);
break;}

case 3:
{ printf("\nReverse of the String\n");
printf("Enter the string: \n");
scanf("%s",s1);
while(s1[i]!='\0')
{len=len+1;
i++;}
for(i=len-1;i>=0;i--)
{printf("%c",s1[i]);}
break;}

case 4:
{ printf("\nString Copying\n");
printf("Enter the string: ");
scanf("%s",s1);
while(s1[i]!='\0')
{ s2[i]=s1[i];
i++;}
s2[i]='\0';
printf("Copy of the string=%s",s2);
break;}

default:
{ printf("Invalid");}
return 0;
}}
