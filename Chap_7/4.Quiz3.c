#include<stdio.h>

int display(int x, int y);

int main()
{
    int students = 2;
    int subjects = 3;

    int marks[2][3];
    display (students,subjects);
    return 0;
}

int display(int x, int y){
    int i=0,j=0;
    int marks[2][3];
    for (i=0;i<x;i++){
        for(j=0;j<y;j++){
        printf("Enter the marks of student %d in subject %d = ", i+1,j+1);
        scanf("%d", &marks[i][j]);
    }
}

    for (i=0;i<x;i++){
        for(j=0;j<y;j++){
        printf("\nThe marks of student %d in subject %d is %d", i+1,j+1,marks[i][j]);

    }
}
return 0;
}
