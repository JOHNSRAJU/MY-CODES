// Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms
/*****************************************************************************
$ NAME - exe_2_33
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
$ DATE - 02/08/2021 
$ VERSION - 1.0 
******************************************************************************/
#include<stdio.h>
int main()
{
    int input,term=1,termDuplicate=1,sum=1,i;
    printf("Enter a number");
    scanf("%d",&input);
    for (i=1;i<input;i++){  
        term=(term*10)+1;       // for finding next term
        sum=sum+term;          //adding the terms one by one
        termDuplicate=term;   // for storing the value
    }
    printf("%d",sum);
    return 0;
}