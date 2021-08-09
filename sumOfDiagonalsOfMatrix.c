/*****************************************************************************************************
$ NAME - sumOfDiagonalsOfMatrix
$ CREATOR - JOHNS RAJU 
$ PROGRAM - A program to find the sum of diagonal values of a matrix.
$ DATE - 09/08/2021 
$ VERSION - 1.0 
*****************************************************************************************************/
#include<stdio.h>
int main()
{
    int myMatrix[10][10];
    int rowOrColumn,i,j,sum=0;
    printf("\nEnter the number of rows/column of a square matrix\n");
    scanf("%d",&rowOrColumn);
    printf("\nEnter the values\n");
    for(i=0;i<rowOrColumn;i++){              //Collecting values of elements
        for(j=0;j<rowOrColumn;j++){
            printf("Matrix [%d][%d]:-",i,j);
            scanf("%d",&myMatrix[i][j]);
        }
    }
    printf("\nYour matrix is :-\n");        //For printing the given matrix
    for(i=0;i<rowOrColumn;i++){
        printf("\t|\t");
        for(j=0;j<rowOrColumn;j++){
            printf("%d\t",myMatrix[i][j]);
        }
        printf("|\n");
    }
    for(i=0;i<rowOrColumn;i++){            //forward diagonals has equal values of i and j 
        sum=sum+myMatrix[i][i];
    }
    printf("The sum of forward diagonal element is: %d",sum);
    sum=0;
    for(i=0;i<rowOrColumn;i++){           //backward diagonal's sum of j & i is equal to no.of rows  
        for(j=0;j<rowOrColumn;j++){
            if(i+j==(rowOrColumn-1)){     // because i and j is starting from 0 and row no. is starting from 1
                sum=sum+myMatrix[i][j];
            }
        }
    }
    printf("\nThe sum of backward diagonal is: %d",sum);
    return 0;
}