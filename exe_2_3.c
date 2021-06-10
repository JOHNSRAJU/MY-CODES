/*****************************************************************************
$ NAME - exe_2_3.c
$ CREATOR - JOHNS RAJU 
$ PROGRAM - Is eligible for casting his/her own vote.
$ DATE - 08/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    int age;
    printf("\nEnter your age");
    scanf("%d",&age);
    // Appliying the condition
    if(age >= 21)
    {
        // Statement is true.
        printf("\nCongratulation! You are eligible for casting your vote.");
    }
    else
    {
        // If statement is false.
        printf("\nSorry you are not eligible for casting your vote.");
    }
    return 0;
}