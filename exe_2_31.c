// Write C Program to print hollow diamond pattern using stars

/*****************************************************************************
$ NAME - exe_2_31
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To print hollow diamond pattern using stars
$ DATE - 31/07/2021 
$ VERSION - 1.0 
******************************************************************************/
#include<stdio.h>
int main()
{
    int input,i,j,k,l=1,m,n,o;
    printf("Enter a number");
    scanf("%d",&input);
    for (i=1;i<=input;i++){         //for finding the row upto half
        l=l+2;
        for (j=i;j<input;j++){     //for putting first * in correct palce
            printf(" ");
        }
        printf("*");               
        for (k=4;k<l;k++){        //for giving space between two symbols
            printf(" ");
        }
        if (i>1){
            printf("*");
        }
        printf("\n");
    }
    for (i=input;i>=1;i--){       //for finding the row after the half
        for (j=input;j>i;j--){    //for putting first * in correct palce
            printf(" ");
        }
        printf("*");
        for (k=3;k<2*i;k++){      //for giving space between two symbols
            printf(" ");
        }
        if (i!=1){
            printf("*\n");
        }
    }


    return 0;
}