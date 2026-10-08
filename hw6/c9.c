
#include <stdio.h>
#include <inttypes.h>

void factorial(void);

int main()
{
	factorial();
	return 0;
}

void factorial(void)
{
	int a,b=1;
	scanf("%d",&a);
	for (int i = 1; i <= a; i++)
	{
		b *= i;
	}
	printf("%d\n",b);
}
