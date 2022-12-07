#include<stdio.h>
#include<stdlib.h>
float f (float x) { return 4*x - 3*x*x ; }
void simpson18()
{
    int i, n;
	float a, b, h, s, odd = 0, even = 0;
	printf("Enter values of lower limit, upper limit and no. of intervals:\n");
	scanf("%f%f%d", &a, &b, &n);
	h = (b-a)/n;
	if (n % 2 != 0) printf("Simpson's 1/3 Rule is not applicable.\n");
	else {
		for (i = 1; i <= n-1; i++) {
			if (i % 2 == 0) even += f(a + i*h);
			else odd += f(a + i*h);
		}
		s = (h / 3) * (f(a) + f(b) + 2*even + 4*odd);
		printf("Integral = %f\n", s);
	}
}

/*input
0 1 10
*/

int main()
{
    simpson18();
}