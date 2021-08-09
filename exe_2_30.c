// Program to print diamond star patterns is discussed here. Given a number n, write a program to print a diamond shape with 2*n rows.

/*****************************************************************************
$ NAME - exe_2_30
$ CREATOR - JOHNS RAJU 
$ PROGRAM - Program to print diamond star patterns.
$ DATE - 30/07/2021 
$ VERSION - 1.0 
******************************************************************************/
#include<stdio.h>
int main()
{
    int i,j,k,l=1,m,input;
    printf("Enter a number");
    scanf("%d",&input);
    // This loop is for upto half
    for (i=1;i<=input;i++){         //for finding the row
        l=l+2;
        for (j=i;j<input;j++){     //for spacing
            printf(" ");
        }
        for (k=2;k<l;k++){        //for symbol
            printf("*");
        }
        printf("\n");
    }
    // This loop is for after the half
    for (i=1;i<=input;i++){       //for finding the row
        l=l-2;
            for (j=1;j<=i;j++){  //for spacing
            printf(" ");
            }
            for (k=2;k<l;k++){   //for symbol
            printf("*");
           // printf("*");
            }
        printf("\n");
    }
    return 0;
}