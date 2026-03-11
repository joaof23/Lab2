#include <stdio.h> 
#include <stdlib.h>
#include "input.h"
#include <math.h>

int main() {
    float root , total , total1,  a , b ,c ;

    printf("Valor de A, B e C:\n");
    scanf("%f %f %f",&a,&b,&c);
    printf("numeros são: %.2f %.2f %.2f \n",a,b,c);

    root = (b*b)-(4*a*c);

        if (root < 0){
            printf("Impossivel\n");
        } else {
            total=((-b)+sqrt(root))/(2*a);
            total1=((-b)-sqrt(root))/(2*a);
            printf("total 1 %.2f\n",total);
            printf("total 2 %.2f\n",total1);
        }


    return 0 ;
}
