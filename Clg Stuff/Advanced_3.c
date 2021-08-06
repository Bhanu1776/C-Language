#include<stdio.h>
#include<stdlib.h>

// Addition of two 3x3 matrices
void add(int m[3][3], int n[3][3], int sum[3][3])
{
for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
sum[i][j] = m[i][j] + n[i][j];
}

// subtraction of two 3x3 matrices
void subtract(int m[3][3], int n[3][3], int result[3][3])
{
for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
result[i][j] = m[i][j] - n[i][j];
}

// multiplication of two 3x3 matrices
void multiply(int m[3][3], int n[3][3], int result[3][3])
{
for(int i=0; i < 3; i++)
{
for(int j=0; j < 3; j++)
{
result[i][j] = 0;
for (int k = 0; k < 3; k++)
result[i][j] += m[i][k] * n[k][j];
}
}
}

// transpose of a 3x3 matrix
void transpose(int matrix[3][3], int trans[3][3])
{
for (int i = 0; i < 3; i++)
for (int j = 0; j < 3; j++)
trans[i][j] = matrix[j][i];
}

// display 3x3 matrix
void display(int matrix[3][3])
{
for(int i=0; i<3; i++)
{
for(int j=0; j<3; j++)
printf("%d\t",matrix[i][j]);
printf("\n");
}
}

// main function
int main()
{
// matrices
int a[][3] = { {9,8,7}, {6,5,4}, {3,2,1} };
int b[][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
int c[3][3];
// printing both matrix
printf("First Matrix:\n");
display(a);
printf("Second Matrix:\n");
display(b);
// variable to take choice
int choice;
// menu-driven
do
{
// menu to choose the operation
printf("\nChoose the matrix operation,\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Transpose\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
add(a, b, c);
printf("Sum of matrices: \n");
display(c);
break;
case 2:
subtract(a, b, c);
printf("Subtraction of matrices: \n");
display(c);
break;
case 3:
multiply(a, b, c);
printf("Multiplication of matrices: \n");
display(c);
break;
case 4:
printf("Transpose of the first matrix: \n");
transpose(a, c);
display(c);
printf("Transpose of the second matrix: \n");
transpose(b, c);
display(c);
break;
default:
printf("Invalidexit(0)");
}
}while(1);
return 0;
}