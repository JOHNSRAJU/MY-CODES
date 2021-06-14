/*****************************************************************************
$ NAME - exe_2_19.c
$ CREATOR - JOHNS RAJU 
$ PROGRAM - To find it is a vowel or Consonant.
$ DATE - 10/06/21 
$ VERSION - 1.0 
*****************************************************************************/
#include<stdio.h>
int main()
{
    char letter;
    printf("Enter a letter to find it's vowel or not.\n");
    scanf("%c",&letter);
    // switching to different cases
    switch (letter){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel",letter);
            break;
        default:
            printf("%c is a Consonant",letter);
    }
    return 0;
}