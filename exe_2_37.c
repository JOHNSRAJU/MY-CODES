/* Suppose you are given 10 Rupees on day 1 and on day 2 you are given twice as
much. If each day you are given twice as much money as on the previous day, 
then on day 15, how much money you will receive? Build a C program to find the 
solution.
/*****************************************************************************
$ NAME - exe_2_35
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To print A Calendar
$ DATE - 02/08/2021 
$ VERSION - 1.0 
******************************************************************************/
#include<stdio.h>
int main()
{
    int input,i;
    printf("Enter the first day salary");
    scanf("%d",&input);
    for (i=1;i<15;i++){
    input=input*2;
    }
    printf("The money you will get in the 15th day is: %d",input);
    return 0;
}