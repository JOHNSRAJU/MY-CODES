/*****************************************************************************
$ NAME - exe_2_4.c
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To determine whether the seller has made profit or incurred loss.
$ DATE - 08/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    float costPrice , sellingPrice , profitOrLoss;
    printf("Enter the cost price of the product\n");
    scanf("%f",&costPrice);
    printf("\nEnter the selling price of the product\n");
    scanf("\n%f",&sellingPrice);
    if(costPrice<sellingPrice)
    //If statement is true.
    {
        printf("\nYou have profit from this product");

        printf(" and Profit=%.2f",sellingPrice-costPrice);

    }
    else if(costPrice==sellingPrice)
    {
        printf("There is no loss or gain from this product");
    }
    else
    //If statement is false.
    {
        printf("You incurred loss from this product");
        printf(" and Loss=%.2f",costPrice-sellingPrice);
    }

    return 0;
}