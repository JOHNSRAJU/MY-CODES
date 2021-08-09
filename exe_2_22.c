/*Write a program in C to display the such a pattern for n number of rows using a
number which will start with the number 1 and the first and a last number of each
row will be 1.
  1
 121
12321*/

/*****************************************************************************************************
$ NAME - exe_2_22.c
$ CREATOR - JOHNS RAJU 
$ PROGRAM - Write a program in C to display the such a pattern for n number.
$ DATE - 10/06/21 
$ VERSION - 1.0 
******************************************************************************************************/
#include<stdio.h>
int main()
{
    int i,j,limit;
    printf("Enter the number of row\n");
    scanf("%d",&limit);
    printf("\n");
    for(i=1;i<limit+1;i++){       //intialising the loop
        for (j=limit; j>i; j--){  //loop for spacing
            printf(" ");          
        }
        for(j=1;j<=i;j++){       //loop for numbers upto middle 
                printf("%d",j);
        }
        for(j=i-1;j>=1;j--){     //loop for numbers after middle
                printf("%d",j);   
        }
        printf("\n");
        }
    return 0;
}