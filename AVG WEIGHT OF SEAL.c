
/******************************************************************************/
/* CREATOR - JOHNS RAJU */ 
/* PROGRAM - TO FIND AVG WEIGHT OF SEAL */
/* DATE - 28/05/21 */
/* VERSION - 1.0 */
/******************************************************************************/
#include<stdio.h>
int main()
{
// INTIALISING PROGRAM
int numberOfElephant , i , n;
// COLLECTING NUMBER OF SEAL
printf("\nENTER NUMBER OF NORTHERN ELEPHANTS SEALS\n");
scanf("\n%d", &numberOfElephant);
float average , sum=0.0 , array[numberOfElephant];
// LOOPING THE STATEMENT
for(i=0 ; i < numberOfElephant ; ++i )
{
 printf("\nENTER THE WEIGHT OF(%d) NORTHERN ELEPHANT SEALS\n" , 
n=i+1);
 scanf("\n%f", &array[i]);
 sum=sum+array[i];
}
// FINDING THE AVERAGE 
average=sum/numberOfElephant;
// PRINTING THE ANSWER
printf("\nAVERAGE WEIGHT OF NORTHERN ELEPHANT SEAL =%f",average);
printf("\n\t THANK YOU/n");
return 0;
// PROGRAM FINISHED
}
