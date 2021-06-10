/*****************************************************************************
$ NAME - exe_2_9.c
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To sorting temperature.
$ DATE - 10/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    float centiTemp;
    printf("Please enter the temperature in centigrade\n");
    scanf("%f",&centiTemp);
    //for temperatue less than 0
    if (centiTemp<=0){
        printf("This is  freezing temperature");
    }
    //for temperature 0- 10
    else if(centiTemp<=10){
        printf("This is very cold weather");
    }
    //for temperature 10-20
    else if(centiTemp<=20){
        printf("This is cold weather");
    }
    //for temperature 20-30
    else if(centiTemp<=30){
        printf("This is normal weather");
    }
    //for temperature 30-40
    else if(centiTemp<40){
        printf("This is very hot weather");
    }
    //for temperature above 40
    else{
        printf("This is very very hot weather");
    }
    return 0;
    }

