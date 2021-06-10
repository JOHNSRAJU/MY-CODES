/*****************************************************************************
$ NAME - exe_2_8.c
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To find the leap year.
$ DATE - 09/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    int year;
    printf("Please enter the year\n");
    scanf("%d",&year);
    //leap year is divisible by 4
    if (year%4==0){
        //if leap is divisible by 100 then also with 400
        if (year%100==0 && year%400==0){
            printf("This is a leap year.");
        }
        else if(year%100!=0 && year%400!=0){
            printf("This is a leap year.");
        }
        else {
            printf("This is not a leap year.");
        }
    }
    else{
        printf("This is not a leap year.");
    }
    return 0;
}