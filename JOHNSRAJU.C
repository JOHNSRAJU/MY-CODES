#include <stdio.h>

int main()
{
   int i,j,n;
   printf("Input number of rows : ");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
     /* print blank spaces */
     for(j=1;j<=n-i;j++)
	printf(" ");
     /* Display number in ascending order upto middle*/
        for(j=1;j<=i;j++)
            printf("%d",j);
 
     /* Display  number in reverse order after middle */
        for(j=i-1;j>=1;j--)
	    printf("%d",j);
 
        printf("\n");
   }
   return 0;
}
