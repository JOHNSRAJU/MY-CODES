#include<stdio.h>
#include<stdlib.h>
int main()
{
    int input,randomNumber;
    randomNumber= rand();
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
