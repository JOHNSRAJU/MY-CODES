// Write a C Program to print Solid Half Diamond pattern printing using stars
/*****************************************************************************
$ NAME - exe_2_33
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To print Solid Half Diamond pattern printing using stars
$ DATE - 03/08/2021 
$ VERSION - 1.0 
******************************************************************************/
#include<stdio.h>
int main()
{
    int input,i,j,k;
    printf("Enter a number\n");
    scanf("%d",&input);
    for (i=1;i<input;i++){    //printing upto half
        printf("* ");
        for (j=1;j<i;j++){          //for printing upto greatest number in a row
                printf("%d ",(j));
        }
        if (j>2){                   //for printing after greatest number in a row
            for (k=2;k<j;k++){
                printf("%d ",(j-k));
            }
        }
        if (i>1){
        printf("*");
        }
        printf("\n");
    }
    for (i=1;i<(input-1);i++){                    //printing after half
        printf("* ");
        for (j=1;j<((input-1)-i);j++){           //for printing upto greatest number in a row
            printf("%d ",j);
        }
        for (k=2;k<j;k++){                       //for printing after greatest number in a row
            printf("%d ",j-k);
        }
        if (i<(input-2)){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}