// Write a program in C to display the cube of the number upto given an integer
/*****************************************************************************
$ NAME - exe_2_25
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To display the cube of the number upto given an integer.
$ DATE - 25/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    int i,input,cube;
    printf("Enter a number\n");
    scanf("%d",&input);
    for (i=1;i<=input;i++){
        cube=i*i*i;
        printf("The number is: %d and cube of %d is %d\n",i,i,cube);
    }
    return 0;
}