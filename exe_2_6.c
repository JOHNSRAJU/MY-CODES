/*****************************************************************************
$ NAME - exe_2_6.c
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To find out whether it is an odd number or even number.
$ DATE - 09/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    int number , reminder;
    printf("Enter a number\n");
    scanf("%d",&number);
    //Applying condition
    (number%2)==0?printf("This is a even number"):printf("This is a odd number");
    return 0;
}