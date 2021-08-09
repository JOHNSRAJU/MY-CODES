/*****************************************************************************
$ NAME - decimalToBinary.c
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To calaculate the binary value of a decimal number.
$ DATE - 15/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    int decimalNumber,reminder,placesOfNumber=1,decimalNumberCopy;
    long long binaryNumber = 0;                                      //FOR LARGE VALUE
    printf("***************************\n");
    printf("DECIMAL TO BINARY CONVERTER\n");
    printf("***************************\n");

    printf("Please enter a number\n");
    scanf("%d",&decimalNumber);
    decimalNumberCopy=decimalNumber;
    while(decimalNumber>0){
       reminder = (decimalNumber%2);                             // TAKING REMINDER WHEN DIVIDING BY 2
       decimalNumber = (decimalNumber/2);                        // DIVIDING BY 2
       binaryNumber = (binaryNumber+(reminder*placesOfNumber));  //STORING THE VALUE
       placesOfNumber = placesOfNumber*10;                       // MULTIPLING
    }
    printf("The BINARY number of %d = %d",decimalNumberCopy,binaryNumber);
    return 0;
}