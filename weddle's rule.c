#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float resolve(float x)
{
    float temp;
    temp=1/(1+x*x);

    return temp;
}

void  main()
{
    float a,b,s,s1,s2,res;
    s=s1=s2=0;

    int n,m;
    printf("Enter the upper limit= ");
    scanf("%f",&b);

    printf("Enter the lower limit= ");
    scanf("%f",&a);

    printf("Enter the value of n= ");
    scanf("%d",&n);

    res=(b-a)/n;
    printf("res= %f",res);

    m=n/6;
    s=0;

    if(n%6==0)
    {
        for(int i=1;i<=m;++i)
        {
            s=s+((3*res/10)*(resolve(a)+resolve(a+2*res)+5*resolve(a+res)+6*resolve(a+3*res)+resolve(a+4*res)+5*resolve(a+5*res)+resolve(a+6*res)));
        }
        printf("Result is : %f",s);
    }
    else
    {
        printf("Weddle's rule is not applicable");
    }
}