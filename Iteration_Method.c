#include <stdio.h>
#include <math.h>

#define g(x) (x*x - 5*x + 8)

void main()
{

    printf("***********************************************************");printf("\n");
    printf("***********************************************************");printf("\n");
    printf("*              Iteration Method                           *");printf("\n");
    printf("***********************************************************");printf("\n");
    printf("***********************************************************");printf("\n");

    float x0, x1, E, Err;

    printf("Enter Initial Guess and E: ");
    scanf("%f %f", &x0, &E);

    while(1){
        x1 = g(x0);

        Err = fabs((x1 - x0) / x1);

        if ( Err < E ){
            printf("Root = %f\n", x1);
            break;
        }

        x0 = x1;
    }

}