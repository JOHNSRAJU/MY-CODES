/*****************************************************************************
$ NAME - exe_2_7.c
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To calculate position grade
$ DATE - 09/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    float mathsMark,physicsMark,chemistryMark,avgMark,totalMark;
    char name[10];
    int rollNo;
    //INTIALISING
    printf("Enter your name\n");
    scanf("%s",&name);
    printf("Enter your roll number\n");
    scanf("%d",&rollNo);
    printf("Enter your maths mark out of 100\n");
    scanf("%d",&mathsMark);
    printf("Enter your physics mark out of 100\n");
    scanf("%d",&physicsMark);
    printf("Enter your chemistry mark out of 100\n");
    scanf("%d",&chemistryMark);
    //FINDING TOTAL AND AVERAGE
    totalMark=mathsMark+physicsMark+chemistryMark;
    avgMark=totalMark/3;
    printf("%s \troll no. %d\n",name,rollNo);
    //AVERAGE MORE THAN 75
    if(avgMark>=75){
        printf("Congratulation!! you got First Class with Distinction");
    }
    //AVERAGE BETWEEN 60 AND 75
    else if(avgMark>=60){
        printf("Congratulation!! you got First Class");
    }
    //LESS THAN 60
    else{
        printf("Congratulation!! you got second Class");
    }
    return 0;
}