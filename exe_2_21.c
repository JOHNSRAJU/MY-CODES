//2.21 Write a program in C to find the number and sum of all integer between 100 and 200 which are divisible by 9.
/*****************************************************************************************************
$ NAME - exe_2_21.c
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To find the number and sum of all integer between 100 and 200 which are divisible by 9
$ DATE - 10/06/21 
$ VERSION - 1.0 
******************************************************************************************************/
#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("Integer between 100 and 200 which are divisible by 9\n");
    for(i=108;i<200;i=i+9){
        printf("%d\t",i);
        sum=sum+i;
    }
    printf("\nSum of all integer between 100 and 200 is = %d",sum);
    return 0;
}