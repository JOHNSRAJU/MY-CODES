//write a C Program to read a Decimal number from the user and convert it into an Octal Number.
/*****************************************************************************
$ NAME - exe_2_27
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To convert decimal number to octact number. 
$ DATE - 30/07/2021 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    int input,i=1,reminder,octantNumber=0,duplicateInput;
    printf("Enter a number\n");
    scanf("%d",&input);
    duplicateInput = input;
    while (input > 0){
        reminder = input % 8;
        input = input / 8;
        octantNumber = octantNumber + reminder * i;
        i = i* 10;                       //for defining places for values
    }
    printf("The decimal equivalent of Octal number %d is %d",duplicateInput,octantNumber);
    return 0;
}