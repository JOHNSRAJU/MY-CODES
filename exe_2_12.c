/*****************************************************************************
$ NAME - exe_2_12.c
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To check whether a triangle is valid or not.
$ DATE - 10/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    int angle1,angle2,angle3;
    printf("Enter the three angles of a triangle\n");
    scanf("%d%d%d",&angle1,&angle2,&angle3);
    //checking for 0 degree
    if(angle1 != 0 && angle2 != 0 && angle3 != 0){
        //checing for sum of angles of triangle is 180
        (angle1+angle2+angle3)==180?printf("Yes!! This triangle is possible"):printf("NO!! This triangle is not possible");
    }
    else{
        printf("Triangle with 0 degree angle is not possible");
    }
    return 0;
}
