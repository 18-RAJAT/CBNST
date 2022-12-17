#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define f1(x,y,z)  (x-y+2*z)/20
#define f2(x,y,z)  (3*x+y+z)/20
#define f3(x,y,z)  (2*x+2*y+3*z)/20

int main()
{
	int ct=1;
    float x0=0,y0=0,z0=0;
    float x1,y1,z1;
    float e,e1,e2,e3;
    
    printf("Enter the error: ");
    scanf("%f",&e);
    
    printf("\nCount\tx\ty\tz\n");
    do
    {
    	x1=f1(x0,y0,z0);
    	y1=f2(x1,y0,z0);
    	z1=f3(x1,y1,z0);
    	
    	printf("%d\t%0.4f\t%0.4f\t%0.4f\n",ct,x1,y1,z1);
    	
    	e1=fabs(x0-x1);
    	e2=fabs(y0-y1);
    	e3=fabs(z0-z1);
    	
    	ct++;
    	x0=x1;
    	y0=y1;
    	z0=z1;
    }
    while(e1>e && e2>e && e3>e);
    printf("\nSolution: x=%0.3f, y=%0.3f and z = %0.3f\n",x1,y1,z1);
}