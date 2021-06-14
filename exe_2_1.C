/*****************************************************************************
$ NAME - exe_2_1.c
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To performs the operation and then prints the result.
$ DATE - 10/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    int integer1,integer2,solution;
    char operation;
    printf("Enter the symbol of operation(+,-,*, /, %)\n");
    scanf("%c",&operation);
    printf("Enter 1st number\n");
    scanf("%d",&integer1);
    printf("Enter 2nd number\n");
    scanf("%d",&integer2);
    // switching the different cases
    switch (operation){
        case '+'://addition
            solution=integer1+integer2;
            printf("%d %c %d = %d",integer1,operation,integer2,solution);
            break;
        case '-'://subtraction
            solution=integer1-integer2;
            printf("%d %c %d = %d",integer1,operation,integer2,solution);
            break;
        case '*'://multiplication
            solution=integer1*integer2;
            printf("%d %c %d = %d",integer1,operation,integer2,solution);
            break;
        case '/'://division
            (solution=integer1/integer2);
            printf("%d %c %d = %.2f",integer1,operation,integer2,(float)integer1/integer2);
            break;
        case '%'://reminder
            solution=integer1%integer2;
            printf("%d %c %d = %d",integer1,operation,integer2,solution);
            break;
        default:
        printf("Please enter a valid symbol");
    }
    return 0;
}