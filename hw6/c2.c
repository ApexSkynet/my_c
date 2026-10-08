
#include <stdio.h>

float power(float a, int b);

int main()
{
	float n;
	int p;
	scanf("%f%d",&n,&p);
	printf("%f\n",power(n,p));
	return 0;
}

float power(float a, int b)
{
	float pow = 1.0;
	for(int i = 1; i<=b;i++)
	{
		pow *= a;
	}
	 return pow;
}
