/*****************************************************************************
$ NAME - exe_2_18.c
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To  declare the equivalent description.
$ DATE - 10/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    char grade;
    printf("Enter a grade (E,V,G,A,F)\n");
    scanf("%c",&grade);
    // switching the different cases
    switch (grade){
        case 'e':
            printf("Excellent");
            break;
        case 'v':
            printf("Very Good");
            break;
        case 'g':
            printf("Good");
            break;
        case 'a':
            printf("Average");
            break;
        case 'f':
            printf("Fail");
            break;
        case 'E':
            printf("Excellent");
            break;
        case 'V':
            printf("Very Good");
            break;
        case 'G':
            printf("Good");
            break;
        case 'A':
            printf("Average");
            break;
        case 'F':
            printf("Fail");
            break;
        default:
        printf("Please enter a valid code");
    }
    return 0;
} 