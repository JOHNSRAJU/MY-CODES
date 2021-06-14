/*****************************************************************************
$ NAME - exe_2_2.c
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To find the roots of a Quadratic Equation.
$ DATE - 10/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
#include<math.h>
int main()
{
    //intialising
    int a,b,c;
    float solution1,solution2,inRoot,bBy2A,rootBy2A,root;
    printf("Enter a\n");
    scanf("%d",&a);
    printf("Enter b\n");
    scanf("%d",&b);
    printf("Enter c\n");
    scanf("%d",&c);
    inRoot = ((b*b)) - ((4*a) * c);
    if (inRoot>0){    //values inside root is posive
        root=sqrt(inRoot);
        solution1 = (-b + root) / (a*2);
        solution2= (-b - root) / (a*2);
        printf("The root values are %.2f  and  %.2f",solution1,solution2);
    }
    else if(inRoot<0){    //values inside root is negative
        root = sqrt((-1*inRoot));
        bBy2A = (float)-b / (2*a);
        rootBy2A =(float) root / (2*a);
        printf("The root values are %.2f + %.2f i  and  %.2f - %.2f i",bBy2A,rootBy2A,bBy2A,rootBy2A);
    }
    else{                  //values inside root is zero
        bBy2A = (float)-b / (2*a);
        printf("The root values are %.2f  and  %.2f",1*bBy2A,(-1*bBy2A));
    }
    
    
    return 0;
}
