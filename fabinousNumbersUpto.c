/*****************************************************************************
$ NAME - fabinousNumbersUpto
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To determine the youngest of the three..
$ DATE - 10/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{

    int i,first=0,second=1,third,givenNumber;
    printf("Enter a number\n");
    scanf("%d",&givenNumber);
    printf("****************\n");
    printf("FABINOUS NUMBERS\n");
    printf("****************\n");
    for(third=0;third<=givenNumber;third=second+first){
        printf("%d\t",third);
        first=second;
        second=third;
            }
    return 0;
}