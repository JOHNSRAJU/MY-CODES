//Write a C program to read two numbers from the keyboard and find the Highest Common Factor (HCF) and Least Common Multiple(LCM).
/*****************************************************************************
$ NAME - exe_2_28
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To find the Highest Common Factor (HCF) and Least Common Multiple(LCM) 
$ DATE - 30/07/2021 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    int number1,number2,i,hcf,lcm;
    printf("Enter the 1st number\n");
    scanf("%d",&number1);
    printf("Enter the 2nd number\n");
    scanf("%d",&number2);
    for (i=1;i<=number1;i++){               //For finding HCF
        if (number1%i==0 && number2%i==0){
            hcf=i;
        }
    }
    lcm=(number1 * number2) / hcf;         //for findind LCM
    printf("The HCF of given numbers is %d\nThe LCM of given numbers is %d",hcf,lcm);

    return 0;
}