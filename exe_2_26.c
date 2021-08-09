// Write a C program to read a Binary Number from the user and Convert it into Decimal.
/*****************************************************************************
$ NAME - exe_2_26
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To read a Binary Number from the user and Convert it into Decimal.
$ DATE - 29/07/2021 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    int i,number,lastDigit,duplicateNumber,multiplier,decimalNumber=0,count=1;
    printf("Enter a number");
    scanf("%d",&number);
    duplicateNumber=number;
    while (number>0){ // this loop is for extracting digits of numbers
        lastDigit=number%10;
        number=number/10;
        multiplier=1;
        for (i=1;i<count;i++){ 
            multiplier=multiplier*2;
        }
            lastDigit = lastDigit*multiplier;
        
        count=count+1;
        decimalNumber=decimalNumber+lastDigit;

    }
    printf("The binary number: %d\nThe equivlent decimal number:%d",duplicateNumber,decimalNumber);
    return 0;
}