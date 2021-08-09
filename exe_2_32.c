// Write a C Program to print Solid Half Diamond pattern printing using stars
/*****************************************************************************
$ NAME - exe_2_32
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To print Solid Half Diamond pattern printing using stars
$ DATE - 31/07/2021 
$ VERSION - 1.0 
******************************************************************************/
#include<stdio.h>
int main()
{
    int input,i,j,k;
    printf("Enter a number\n");
    scanf("%d",&input);
    for (i=1;i<=input;i++){    //printing upto half
        for (j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for (i=1;i<=input;i++){    //printing after half
        for (j=i;j<input;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}