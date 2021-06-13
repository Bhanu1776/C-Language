// Pyrimid type 1

#include<stdio.h>

int main()
{
    int a,b,n;
    printf("Enter any number = ");
    scanf("%d",&n);

    for (int a=1; a<=n; a++){    // This print no of lines !!
        for (int b=1 ; b<=a; b++){  
            printf("%d",b);  // b for different no in every column and a for same no in every column !!
        }
        printf("\n");  // This prints to carry forward in next line !
    }

    
//  For Stars **

    int i,j,k;
    printf("Enter the no of lines u need = ");
    scanf("%d", &k);

    for (i=1;i<=k;i++){
        for (j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }


    // ## Type 2

     int x,y,z;
    printf("Enter any number = ");
    scanf("%d",&z);

    for (int x=1; x<=n; x++){    
        for (int y=1 ; y<=a; y++){  
            printf("%d",z+1-y);   // z=5 then 5+1-y for r1 y=1, for r2 y=2 ;
        }                         // for same no in every row use z+1-x ;;
        printf("\n");  
    }
    return 0;
}

//  Further types are witten in notes ;
// Checkout this link :-- https://imgur.com/a/EGgLxYP
