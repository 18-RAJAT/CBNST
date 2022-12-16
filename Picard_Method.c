#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float f1(float x)
{
    return(1+(x)+pow(x,2)/2);
}

float f2(float x)
{
    return (1+(x)+pow(x,2)/2+pow(x,3)/3+pow(x,4)/8);
}

float f3(float x)
{
    return (1+(x)+pow(x,2)/2+pow(x,3)/3+pow(x,4)/8+pow(x,5)/15+pow(x,6)/48);
}

int main()
{
    float firstValue,finalValue,error,i,a[101],b[101],c[101];

    int temp;

    printf("Initial Value: ");
    scanf("%d",&firstValue);

    printf("Final Value: ");
    scanf("%d",&finalValue);
    
    printf("Error Value: ");
    scanf("%d",&error);


    for(i=firstValue,temp=0;i<=finalValue;i+=error,temp++)
    {
        a[temp]=f1(i);
        b[temp]=f2(i);
        c[temp]=f3(i);
    }
    printf("\n\nx    ");
    for(i=firstValue;i<=finalValue;i+=error)
    printf("%.4f",i);


    printf("\n\ny1    ");
    for(i=firstValue,temp=0;i<=finalValue;i+=error,temp++)
    printf("%.4f",a[temp]);


    printf("\n\ny2   ");
    for(i=firstValue,temp=0;i<=finalValue;i+=error,temp++)
    printf("%.4f",b[temp]);


    printf("\n\n y3   ");
    for(i=firstValue,temp=0;i<=finalValue;i+=error,temp++)
    printf("%.4f",c[temp]);

}