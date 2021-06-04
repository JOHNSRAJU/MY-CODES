
/******************************************************************************/
/* CREATOR - JOHNS RAJU */ 
/* PROGRAM - TO FIND ASCCI VALUE AND TYPE */
/* DATE - 04/06/21 */
/* VERSION - 1.0 */
/******************************************************************************/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character to find it's ASCCI value and type.");
    scanf("\n%c",&ch);
    printf("The ASCCI value is %d",ch);
    if(ch>='A' && ch<'Z'){
        printf("\nIt is a CAPITAL LETTER");
        }
    else if(ch>='a' && ch<'z'){
            printf("\nIt is a SMAll LETTER");
        }
    else if(ch>='0' && ch<'9'){
           printf("\nIt is a NUMBER"); 
        }
    else {
        printf("\nIt is a SPECIAL CHARACTER\n");

        }
    printf("\tTHANK YOU");
    return 0;
}