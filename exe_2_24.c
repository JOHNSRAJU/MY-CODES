// Write a C program to display Pascal's triangle
/*****************************************************************************
$ NAME - exe_2_24
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To display Pascal's triangle
$ DATE - 08/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
#include<math.h>
int main()
{
    
    int noOfRows,i,j,k,numerator,denominator,numeratorPart,digit;
    printf("Enter number of rows.");
    scanf("%d",&noOfRows);
    for(i=1;i<=noOfRows;i++){         //For finding the row
        for(j=i;j<noOfRows;j++){      //For spacing
            printf(" ");
        }
        numerator=i;
        denominator=i;
        numeratorPart=i;
        if(i==1){                     //for first row
            printf("1 ");
        }
        else{
            for(j=2;j<=(i+1);j++){    //for finding the position
                if(j==2){
                    printf("1 ");
                }
                else{
                    numeratorPart=numeratorPart-1;
                    numerator=numerator*(numeratorPart);
                    digit=numerator/denominator;
                    denominator=denominator*(j-1);   //logic of pascals triangle
                    printf("%d ",digit);
                    }
            }
        }
        printf("\n");
    }
    return 0;
}