/****************************************************************************************
$ NAME - exe_2_17.c
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To find whether the area of the rectangle is greater than its perimeter. 
$ DATE - 10/06/21 
$ VERSION - 1.0 
****************************************************************************************/
#include<stdio.h>
int main()
{
    float length,breadth;
    printf("Enter the length of the rectangle\n");
    scanf("%f",&length);
    printf("Enter the breadth\n");
    scanf("%f",&breadth);
    //applying the condition
    //area = length*breadth   perimeter = 2*(length+breadth)
    if ((length*breadth) > (2*(length+breadth))){
        printf("The area of the rectangle with length = %.2f and breadth = %.2f is greater than its perimeter.",length,breadth );
    }
    else{
        printf("The perimeter of the rectangle with length = %.2f and breadth = %.2f is greater than its area.",length,breadth);
    }
    
    return 0;
}