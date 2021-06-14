/*****************************************************************************
$ NAME - exe_2_16.c
$ CREATOR - JOHNS RAJU 
$ PROGRAM - Converting number into month name 
$ DATE - 10/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    int monthNumber;
    printf("Enter a number between 1 and 12\n");
    scanf("%d",&monthNumber);
    // switching the different cases
    switch (monthNumber){
        case 1:
            printf("MONTH NAME:January");
            break;
        case 2:
            printf("MONTH NAME:February");
            break;
        case 3:
            printf("MONTH NAME:March");
            break;
        case 4:
            printf("MONTH NAME:April");
            break;
        case 5:
            printf("MONTH NAME:May");
            break;
        case 6:
            printf("MONTH NAME:June");
            break;
        case 7:
            printf("MONTH NAME:July");
            break;
        case 8:
            printf("MONTH NAME:August");
            break;
        case 9:
            printf("MONTH NAME:September");
            break;
        case 10:
            printf("MONTH NAME:October");
            break;
        case 11:
            printf("MONTH NAME:November");
            break;
        case 12:
            printf("MONTH NAME:December");
            break;
        default:
        printf("Please enter a valid number");
    }
    return 0;
}