#include<stdio.h>
float resolve(float x,float y)
{
    float f;
    f=x+y;
    return f;
}
int main()
{
    float a,b,x,y,h,t,k;
    printf("Enter the x0: ");scanf("%f",&a);
    printf("Enter the y0: ");scanf("%f",&b);
    printf("Enter the h: ");scanf("%f",&h);
    printf("Enter the xn: ");scanf("%f",&t);
    
    x=a;
    y=b;
    printf("\n  x\t  y\n");
    while(x<=t)
    {
        k=h*resolve(x,y);
        y=y+k;
        x=x+h;
        printf("%0.3f\t%0.3f\n",x,y);
    }
}