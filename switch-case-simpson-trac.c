#include<stdio.h>
#include<math.h>

#define f(x) 1/(1+x*x)

int main()
{
	int ch;
	char choice;
	do{
		
		printf("\n1- TO IMPLEMENT SIMPSON 1/3");
		printf("\n2- TO IMPLEMENT SIMPSON 3/8");
		
		printf("\nENTER YOUR CHOICE =");
		scanf("%d",&ch);
		
		
		switch(ch)
		{
			case 1:
				{
					int i,n;
					float a,b,sum=0.0,h,k;
					printf("\n ENTER THE LIMITS a and b =");
					scanf("%f%f",&a,&b);
					
					printf("ENTER THE NUMBER OF INTERVALS =");
					scanf("%d",&n);
					
					h=(b-a)/n;
					
					sum=f(a)+f(b);
					
					for(int i=1;i<=n-1;i++)
					{
						k=a+h*i;
						if(i%2==0)
						sum=sum+2*f(k);
						else
						sum=sum+4*f(k);
					}
					
					sum=sum*h/3;
					
					printf("\n THE VALUE OF INTEGRATION = %.3f",sum);
					
					break;
					
				}
				
			case 2:
				{
					int i,n;
					float a,b,sum=0.0,h,k;
					printf("\n ENTER THE LIMITS a and b =");
					scanf("%f%f",&a,&b);
					
					printf("ENTER THE NUMBER OF INTERVALS =");
					scanf("%d",&n);
					
					h=(b-a)/n;
					
					sum=f(a)+f(b);
					
					for(int i=1;i<=n-1;i++)
					{
						k=a+h*i;
						if(i%3==0)
						sum=sum+2*f(k);
						else
						sum=sum+3*f(k);
					}
					
					sum=sum*h*3/8;
					
					printf("\n THE VALUE OF INTEGRATION = %.3f",sum);
					
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