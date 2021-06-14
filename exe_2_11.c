/*****************************************************************************
$ NAME - exe_2_11.c
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To determine the type of triange.
$ DATE - 10/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    float side1,side2,side3;
    printf("Enter the length of three sides of a Triangle\n");
    scanf("%f%f%f",&side1,&side2,&side3);
    //for equilateral triangle
    if(side1==side2 && side1==side3){
        printf("The given triangle is a equilateral triangle");
    }
    //for isosceles triangle
    else if(side1==side2 || side1==side3 || side2==side3){
        printf("The given triangle is an isosceles triangle");
    }
    //for scalene triangle
    else{
        printf("The given triangle is a scalene triangle");
    }
    return 0;
}