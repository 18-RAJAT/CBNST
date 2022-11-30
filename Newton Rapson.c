#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MP make_pair
#define PB push_back
#define PF push_front
#define INF (int)1e9
#define EPS 1e-9
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define f1(i,s,e) for(int i=s;i<e;i++)
#define ff1(i,s,e) for(long long int i=s;i>=e;--i)
#define For1(i,n) or(long long int i=0;i<n+1;++i)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define FO(i,s,e) for(long long int i=1;i*i<=y;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pass(a)  for(long long int i=n-1;i>=1;i-=2)
#define pb push_back
#define eb emplace_back

//Newton Rapson Method

float f(float x)
{
    return x*x*x - 2*x -5;
}

float differentiate(float x)
{
    return 3*x*x - 2;
}

int main()
{
    int maxIteration,i;
    float x1,x2,x,x0;
    
    printf("Enter Maximum no of Iterations\n");
    scanf("%d",&maxIteration);

   
   do
   {
        printf("Enter the value of x1 and x2(starting boundary)");
        scanf("%f%f",&x1,&x2);
        if(f(x1)*f(x2)>0)
        {
           printf("Boundary Values are Invalid\n");
           continue;
        }
        else
        {
            printf("Roots Lie between %f and %f\n",x1,x2);
            break;
        }
    } while(1);

    //find x0
    if(fabs(f(x1)) < fabs(f(x2)))
        x0 = x1;
    else
        x1 = x2;    
  
    cf(i,1,maxIteration)
    {
      x=x0-(f(x0)/differentiate(x0));  
      
      if(fabs(x-x0)<0.0001)
      {       
            printf("Iterations=%d  Final Root=%f\n",i,x);
           return 0;
      }      
      printf("Iterations=%d  Roots=%f\n",i,x); 
      x0=x;
    }
    printf("Root=%f  Total Iterations=%d",x,--i);
    return 0;
}