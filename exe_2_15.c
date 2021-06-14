/*****************************************************************************
$ NAME - exe_2_15.c
$ CREATOR - JOHNS RAJU 
$ PROGRAM - Converting number into day name 
$ DATE - 10/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    int dayNumber;
    printf("Enter a number between 1 and 7\n");
    scanf("%d",&dayNumber);
    // switching the different cases
    switch (dayNumber){
        case 1:
            printf("DAY NAME:Monday");
            break;
        case 2:
            printf("DAY NAME:Tuesday");
            break;
        case 3:
            printf("DAY NAME:Wednesday");
            break;
        case 4:
            printf("DAY NAME:Thursday");
            break;
        case 5:
            printf("DAY NAME:Friday");
            break;
        case 6:
            printf("DAY NAME:Saturday");
            break;
        case 7:
            printf("DAY NAME:Sunday");
            break;
        default:
        printf("Please enter a valid number");
    }
    return 0;
}