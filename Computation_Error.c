#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
    double x,barX;
    printf("*****************Computation Error**************\n\n\n");
    printf("Enter the value of x: \t\t");
    scanf("%lf",&x);
    printf("\n\n\n");
    
    printf("Enter the value of barX: \t\t");
    scanf("%lf",&barX);
    printf("\n\n\n");

    double absolute = fabs(x-barX);
    // cout<<"Absolute Error: "<<absolute<<"\n";
    printf("absolute error is:%lf :   ",absolute);
    printf("\n");

    printf("*****************Program Finished*****************");
}