/*****************************************************************************
$ NAME - exe_2_10.c
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To determine the youngest of the three..
$ DATE - 10/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    //intialising
    int ramAge,shyamAge,ajayAge;
    printf("Enter the age of Ram.\n");
    scanf("%d",&ramAge);
    printf("Enter the age of Shyam\n");
    scanf("%d",&shyamAge);
    printf("Enter the age of Ajay\n");
    scanf("%d",&ajayAge);
    //for same age for all
    if(ramAge==shyamAge && ajayAge==ramAge){
        printf("They all have same age");
    }
    //if ram and shyam have same age and younger than ajay.
    else if(ramAge==shyamAge && ramAge<ajayAge){
        printf("Ram and Shyam have same age and they are younger than Ajay");
    }
    //if ram and ajay have same age and younger than shyam.
    else if(ramAge==ajayAge && ramAge<shyamAge){
        printf("Ram and Ajay have same age and they are younger than Shyam");
    }
    //if shyam and ajay have same age and younger than ram.
    else if(shyamAge==ajayAge && shyamAge<ramAge){
        printf("Shyam and Ajay have same age and they are younger than Ram");
    }
    //if ram is younger
    else if (ramAge<shyamAge && ramAge<ajayAge){
        printf("Ram is youngest one");
    }
    //if shyam is younger
    else if (shyamAge<ramAge && shyamAge<ajayAge){
        printf("Shyam is the youngest one");
    }
    //if Ajay is younger
    else{
        printf("Ajay is youngest one");
    }
    return 0;
}