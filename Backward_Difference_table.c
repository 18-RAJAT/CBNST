#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    float a[10],b[10][10];

    printf("Enter the number: ");
    scanf("%d",&n);

    printf("Enter data: ");
    for(int i=0;i<n;++i)
    {
        printf("a[%d]= ",i);
        scanf("%f",&a[i]);

        printf("b[%d]= ",i);
        scanf("%f",&b[i][0]);
    }
    
    for(int i=1;i<n;++i)
    {
        for(int j=n-1;j>i-1;--j)
        {
            b[j][i]=b[j][i-1]-b[j-1][i-1];
        }
    }
    printf("Difference Table\n");
    for(int i=0;i<n;++i)
    {
        printf("\t %.3f",a[i]);

        for(int j=0;j<=i;++j)
        {
            printf("\t %.3f",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}