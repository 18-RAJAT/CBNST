#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void rungaKuttaMethod()
{
    float x0, y0, x, h, k1, k2, k3, k4, k, y;
    printf("Enter initial values of x and y:\n");
    scanf("%f%f", &x0, &y0);
    printf("Enter the value of x at which y is required:\n");
    scanf("%f", &x);
    printf("Enter the step size h:\n");
    scanf("%f", &h);
    while (x0 < x) {
        k1 = h * (x0 + y0);
        k2 = h * (x0 + h/2 + y0 + k1/2);
        k3 = h * (x0 + h/2 + y0 + k2/2);
        k4 = h * (x0 + h + y0 + k3);
        k = (k1 + 2*k2 + 2*k3 + k4) / 6;
        y = y0 + k;
        x0 = x0 + h;
        y0 = y;
    }
    printf("y = %f at x = %f\n", y, x);
}

int main()
{
    rungaKuttaMethod();
}