// Write a program in C to print the Floyd's Triangle
/*****************************************************************************
$ NAME - exe_2_35
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To print the Floyd's Triangle
$ DATE - 02/08/2021 
$ VERSION - 1.0 
******************************************************************************/
#include<stdio.h>
int main()
{
    int i,j,input,count=0;
    printf("Enter the number of rows of Floyd's triangle to print\n");
    scanf("%d",&input);
    for (i=1;i<=input;i++){           //for finding the row
        for (j=1;j<=i;j++){           //for findig the coloumn
            count=count+1;
            printf("%d ",count);
        }
        printf("\n");
    }
    return 0;
}