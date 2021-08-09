// Write A C Program To Print A Calendar By Taking Input From User Using Loop Like Taking a Start Date From User.
/*****************************************************************************
$ NAME - exe_2_36
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To print A Calendar
$ DATE - 02/08/2021 
$ VERSION - 1.0 
******************************************************************************/
#include<stdio.h>
int main()
{
    int noOfDays,startDay,date=1,i;
    printf("Enter the total number of days in that month\n");
    scanf("%d",&noOfDays);
    printf("Enter start as input\n\nstart day are given below:-\nMonday -0\nTuesday -1\nWednesday -2\nThursday -3\nFriday -4\nSaturday -5\nSunday -6\n");
    scanf("%d",&startDay);
    printf("\nMON\tTUE\tWED\tTHU\tFRI\tSAT\tSUN\n\n");
    printf("___________________________________________________\n");
    for (i=0;i<startDay;i++){
        printf("\t");
    }
    while(date<=noOfDays){
        if(startDay!=0){
            if(startDay%7==0){
                printf("\n");
            }
        }
        printf("%d\t",date);
        date=date+1;
        startDay=startDay+1;

    }
return 0;
}