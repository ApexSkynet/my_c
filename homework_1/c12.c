
#include <stdio.h>
#include <inttypes.h>

float power(float a,int b);
float factorial(int n);
float sinus(float x);

int main()
{
	float number;
	float s;
	scanf("%f",&number);
	s = sinus(number);
	printf("%.3f\n",s);
	return 0;
}

float sinus(float x)
{
	float s = 0.;
	x = x * 3.1415/180;
	for (int i = 0; i<=7; i++)
	{
		s += power(-1,i)*power(x,2*i+1)/factorial(2*i+1);
	}
	return s;
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

float factorial(int a)
{
	float b=1.0;
	for (int i = 1; i <= a; i++)
	{
		b *= i;
	}
	return b;
}
