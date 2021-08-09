/*2.23 Write a program in C to find the prime numbers,s within a range.*/

/*****************************************************************************
$ NAME - exe_2_23
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To determine PRIME NUMBERS  between range.
$ DATE - 25/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    int startRange,endRange,half,i,j,remainder,indicator;
    printf("Enter starting number of range\n");
    scanf("%d", &startRange);
    printf("Enter last number of range\n");
    scanf("%d", &endRange);
    //logic - if the given number, is not divisible upto the half of given number-prime prime,.
    printf("The prime numbers between %d and %d are\n",startRange,endRange);
    for(i=startRange;i<=endRange;i++){  
        for(j=2;j<=i/2;j++){     
           remainder=i%j;
           if(remainder==0){
                break;  
            }
        } 
        //if the number is divisible by any number then its j value will be less than half of the that number
        if(j>i/2 && i!=1){
            printf("%d\t",i);
        }
    }
    return 0;
}