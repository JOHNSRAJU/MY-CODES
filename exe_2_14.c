/*****************************************************************************
$ NAME - exe_2_14.c
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To find the absolute value of a number. 
$ DATE - 10/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    float number;
    printf("Enter a number\n");
    scanf("%f",&number);
    //multipling by -1 on negative numbers.
    if (number<0){
        number=(-1*number);
    }
    printf("The absolute value of given no. is: %f",number);
    return 0;
}