/*****************************************************************************
$ NAME - exe_2_13.c
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To print the Electricity bill of a given customer. 
$ DATE - 10/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    //intialising
    char name[10];
    unsigned long long consumerId;//To reading 13 digits of consumer number
    float unitCurrent , costOfElectricity;
    printf("Enter your name\n");
    scanf("%s",&name);
    printf("Enter your consumer ID");
    scanf("%llu",&consumerId);
    printf("Enter your unit of current");
    scanf("%f",&unitCurrent);
    //printing name
    printf("\nNAME:%s",name);
    //printing consumer Id
    printf("\nCONSUMER ID:%llu",consumerId);
    //finding cost
    if(unitCurrent<199){
        costOfElectricity = unitCurrent*1.20;
    }
    else if(unitCurrent<400){
        costOfElectricity = unitCurrent*1.50;
    }
    else if (unitCurrent<600){
        costOfElectricity = unitCurrent*1.80;
    }
    else {
        costOfElectricity = unitCurrent*2.00;
    }
    //adding 15% to cost if cost is higher than 400
    if (costOfElectricity>400){
        costOfElectricity=costOfElectricity+(0.15*costOfElectricity);
    }
    // setting a minumum cost of 100
    else if (costOfElectricity<100){
        costOfElectricity=100;
    }
    else {
        costOfElectricity=costOfElectricity;
    }
    printf("\nYOU HAVE TO PAY: %f",costOfElectricity);
    return 0;
}