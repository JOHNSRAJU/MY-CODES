#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d;
    float root1,root2;
    printf("Enter a,b,c of quadratic equation respectively");
    scanf("%d %d %d",&a,&b,&c);
    d= (b*b) - (4*a*c); //finding discriminent 
    printf("%d",d);
    
    if (d > 0){   //when discriminent is positive                                             
        root1 = (-b + sqrt(d) ) / (2*a);
        root2 = (-b - sqrt(d) ) / (2*a);
        printf("\nRoot 1 = %.2f \nRoot 2 = %.2f",root1,root2); 
    } 
    else if(d<0){   //when discriminent is negative
        float r,i;
        d*=-1;
        r = (float)- b / (2*a);
        i = sqrt(d) / (2*a);
        printf("\nRoot 1 = %.2f + i %.2f ",r,i);
        printf("\nRoot 2 = %.2f - i %.2f ",r,i);
    }
    else{             //when discriminent is zero
        root1= (float)-b / (2*a);
        printf("\nRoot1 = Root2 = %.2f",root1);
    }
    return 0;
}