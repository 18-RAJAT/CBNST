#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    printf("\n\n");
    printf("*****************Computation Error**************\n\n\n");
    float x=1.7643923;
    x*=10000;
    x=(int)(x+0.5);
    x/=10000;
    printf("Round off value is::   %f",x);
    printf("\n\n\n");
    printf("*****************Program Finished*****************");
    printf("\n\n");

    return 0;
}