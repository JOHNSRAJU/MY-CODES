/******************************************************************************/
/* CREATOR - JOHNS RAJU                                                       */ 
/* PROGRAM - bubble sort                                                      */
/* DATE - 04/06/21                                                            */
/* VERSION - 1.0                                                              */
/******************************************************************************/
#include<stdio.h>
int main(){                                         //Intialising
    int i,j,noOfElements,array[10],temp;
    printf("Enter the number of elements");
    scanf("%d",&noOfElements);
    printf("Enter the values\n"); 

    for(i=0;i<noOfElements;i++){                    //Loop for defining array
        printf("ELEMENT %d :- ",i);
        scanf("%d",&array[i]);
    }

    printf("Unsorted array :- \n");                 //printing orginal array
    for(i=0;i<noOfElements;i++){
        printf("%d  ",array[i]);
    }

    for(i=0;i<noOfElements;i++){                    //loop for sorting array
        for(j=0;j<noOfElements-1-i;j++){
            if(array[j]>array[j+1]){
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("\nSorted array :- \n");                //printing sorted array
    for(i=0;i<noOfElements;i++){
        printf("%d  ",array[i]);
    }
    return 0;
}