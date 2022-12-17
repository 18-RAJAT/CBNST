#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
    float m;
    m=(x-y)/(x+y);
    return m;
}
int main()
{
    float x0,y0,m1,m2,m3,m4,m,y,x,h,xn;
    printf("Enter int x0: ");
    scanf("%f",&x0);
    
    printf("Enter the y0: ");
    scanf("%f",&y0);
    
    printf("Enter the xn: ");
    scanf("%f",&xn);
    
    printf("Enter the h: ");
    scanf("%f",&h);

    x=x0;
    y=y0;
    printf("\n\nX\t\tY\n");
    while(x<xn)
    {
        m1=f(x0,y0);
        m2=f((x0+h/2.0),(y0+m1*h/2.0));
        m3=f((x0+h/2.0),(y0+m2*h/2.0));
        m4=f((x0+h),(y0+m3*h));
        m=((m1+2*m2+2*m3+m4)/6);

        x+=h;
        y+=m*h;

        printf("%f\t%f\n",x,y);
    }
}