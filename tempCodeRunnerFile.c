#include<stdio.h>
#include<math.h>

#define f(x) 1/(1+pow(x,2))

int main()
{
	int ch;
	char choice;
	do{
		
		printf("\n1- TO IMPLEMENT newton forward");
		printf("\n2- TO IMPLEMENT NEWTON BACKWARD");
		printf("\n3- LANGRANGE'S'");
		
		
		printf("\nENTER YOUR CHOICE =");
		scanf("%d",&ch);
		
		
		switch(ch)
		{
			case 1:
				{
					float a[100][100],x,u1,u,y;
					int i,j,n,fact;
					
					printf("\n ENTER THE NUMBER OF TERMS =");
					scanf("%d",&n);
					
					for(int i=0;i<n;i++)
					scanf("%f",&a[i][0]);
					for(int i=0;i<n;i++)
					scanf("%f",&a[i][1]);
					
					printf("\n ENTER X TO FIND Y =");
					scanf("%f",&x);
					
					for(int j=2;j<n+1;j++)
					{
						for(int i=0;i<n-j+1;i++)
						{
							a[i][j]=a[i+1][j-1]/a[i][j-1];
						}
					}
					
					u=(x-a[0][0])/(a[1][0]-a[0][0]);
					y=a[0][1];
					u1=u;
					fact=1;
					
					for(i=2;i<=n;i++)
					{
						y=y+(u1*a[0][i])/fact;
						fact=fact*i;
						u1=u1*(u-(i-1));
					}
					
					printf("%f%f",x,y);
					
					break;
					
				}
				
			case 2:
				{
					float a[100][100],x,u1,u,y;
					int i,j,n,fact;
					
					printf("\n ENTER THE NUMBER OF TERMS =");
					scanf("%d",&n);
					
					for(int i=0;i<n;i++)
					scanf("%f",&a[i][0]);
					for(int i=0;i<n;i++)
					scanf("%f",&a[i][1]);
					
					printf("\n ENTER X TO FIND Y =");
					scanf("%f",&x);
					
					for(int j=2;j<n+1;j++)
					{
						for(int i=0;i<n-j+1;i++)
						{
							a[i][j]=a[i+1][j-1]/a[i][j-1];
						}
					}
					
					u=(x-a[n-1][0])/(a[1][0]-a[0][0]);
					y=a[n-1][1];
					u1=u;
					fact=1;
					j=2;
					
					for(i=n-2;i>=0;i--)
					{
						y=y+(u1*a[i][j])/fact;
						fact=fact*j;
						u1=u1*(u+(j-1));
						j++;
					}
					
					printf("%f %f",x,y);
					
					break;
					
					
				}
			case 3:
				{
				float x[100], y[100], xp, yp=0, p;
	 int i,j,n;


	 printf("Enter number of data: ");
	 scanf("%d", &n);
	 printf("Enter data:\n");
	 for(i=1;i<=n;i++)
	 {
		  printf("x[%d] = ", i);
		  scanf("%f", &x[i]);
		  printf("y[%d] = ", i);
		  scanf("%f", &y[i]);
	 }
	 printf("Enter interpolation point: ");
	 scanf("%f", &xp);
	 /* Implementing Lagrange Interpolation */
	 for(i=1;i<=n;i++)
	 {
		  p=1;
		  for(j=1;j<=n;j++)
		  {
			   if(i!=j)
			   {
			    	p = p* (xp - x[j])/(x[i] - x[j]);
			   }
		  }
		  yp = yp + p * y[i];
	 }
	 printf("Interpolated value at %.3f is %.3f.", xp, yp);
	 
	 break;
				}
				
			default:
				printf("\n INVALID CHOICE");
				
				
		}
		
		printf("\nDO YOU WANT TO CONTINUE (Y/N)");
				scanf("%s",&choice);
		
	}while(choice=='Y');
	
	return 0;
}