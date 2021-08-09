/*Write a program that generates a random number and asks the user to guess 
what the number is. If the user's guess is higher than the random number, the 
program should display "Too high, try again." If the user's guess is lower than the 
random number, the program should display "Too low, try again." The program 
should use a loop that repeats until the user correctly guesses the random 
number
/*****************************************************************************************************
$ NAME - exe_2_38
$ CREATOR - JOHNS RAJU 
$ PROGRAM - a program that generates a random number and asks the user to guess what the number is.
$ DATE - 04/08/2021 
$ VERSION - 1.0 
*****************************************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int input,randomNumber;
    randomNumber=int(rand());
    do
    {
        printf("\nGuess the random number\n");
        scanf("%d",&input);
        if(input==randomNumber){
            printf("\nCongratulation! You guessed correct answer\n");
        }
        else if(input>randomNumber){
            printf("\nToo high, try again\n");
        }
        else{
            printf("\nToo low, try again\n");
        }
        printf("__________________________");
    }while(input!=randomNumber);
    return 0;
}