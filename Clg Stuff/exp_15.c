#include<stdio.h>

int main()
{
int a[100][100],b[100][100],i,j,k,r,c,m[100][100],sum=0,diff[100][100],M=0;

printf("Enter the number of rows and columns of matrix A and B = ");
scanf("%d%d",&r,&c);
printf("\nEnter the matrix A\n");

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("Enter the element %d%d : ",i,j);
scanf("%d",&a[i][j]);}
}

printf("\nEnter the matrix B\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("Enter the element %d%d : ",i,j);
scanf("%d",&b[i][j]);}
}

printf("\nEnter the matrix A\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",a[i][j]);}
printf("\n");
}

printf("\nEnter the matrix B\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",b[i][j]);}
printf("\n");
}

//Addition of Matrices//
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{ sum = a[i][j]+b[i][j];
m[i][j] = sum;}
sum=0;
}
printf("\nAddition of Matrices A and B\n");
for(i=0;i<r;i++)
{ for(j=0;j<c;j++)
{ printf("%d\t",m[i][j]);}
printf("\n");}

//Subtraction of Matrices//
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{ diff[i][j] = a[i][j]-b[i][j];
m[i][j] = diff[i][j];}
}
printf("\nSubtraction of Matrices A and B\n");
for(i=0;i<r;i++)
{ for(j=0;j<c;j++)
{ printf("%d\t",m[i][j]);}
printf("\n");

//Multiplication of matrices A and B//
for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
{for(k=0;k<c;k++)
{ M = M + (a[i][k]*b[k][j]);}
m[i][j] = M;
M=0;}}
printf("\nMultiplication Of Matrix A and B\n");
for(i=0;i<r;i++)
{ for(j=0;j<c;j++)
{ printf("%d\t",m[i][j]);}
printf("\n");}

//Transpose of Matrices//
printf("\nTranspose of Matrix A\n");
for(i=0;i<r;i++)
{ for(j=0;j<c;j++)
{ printf("%d\t",a[j][i]);}
printf("\n");}
printf("\nTranspose of Matrix B\n");
for(i=0;i<r;i++)
{ for(j=0;j<c;j++)
{ printf("%d\t",b[j][i]);}
printf("\n");}
}}