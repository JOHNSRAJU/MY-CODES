/*****************************************************************************
$ NAME - exe_2_20.c
$ CREATOR - JOHNS RAJU 
$ PROGRAM -  To check if all the three points fall on one straight line.
$ DATE - 10/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    int pointX1,pointX2,pointX3,pointY1,pointY2,pointY3;
    printf("\nEnter x and y coordinate of 1st point\n");
    scanf("%d%d",&pointX1,&pointY1);
    printf("Enter x and y coordinate of 2nd point\n");
    scanf("%d %d",&pointX2,&pointY2);
    printf("Enter x and y coordinate of 3rd point\n");
    scanf("%d %d",&pointX3,&pointY3);
    if((pointY2-pointY1)/(pointX2-pointX1)==(pointY3-pointY2)/(pointX3-pointX2)){
        printf("This points are on a line");
    }
    else{
        printf("This point are not on a line.");
    }
    
    return 0;
}