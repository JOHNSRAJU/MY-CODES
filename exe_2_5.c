/*****************************************************************************
$ NAME - exe_2_5.c
$ CREATOR - JOHNS RAJU 
$ PROGRAM - Find the eligibility of admission.
$ DATE - 08/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    int maths , physics , chemistry;
    printf("Enter the mark of maths\n");
    scanf("%d",&maths);
    printf("\nEnter the mark of physics\n");
    scanf("%d",&physics);
    printf("\nEnter the mark of chemistry\n");
    scanf("%d",&chemistry);
    if (maths>=65 && physics>=55 && chemistry>=50){ 
        if ((maths+physics+chemistry)>=190){
            printf("\nYou are eligible for admission to a professional course");
        }
        else if((maths+physics)>=140)
        {
            printf("\nYou are eligible for admission to a professional course");
        }
        else
        {
            printf("\nYou are not eligible for admission to a professional course");
    
        }
    
    }
    else{
        printf("\nYou are not eligible for admission to a professional course");
    }
    return 0;
}