
#include <stdio.h>

void sumOddEven(void);

int main(int argc, char **argv)
{
	sumOddEven();
	return 0;
}

void sumOddEven(void)
{
	int sum = 0;
	for (char c = getchar();c != '\n';c=getchar())
	{
		sum += c;
	}
	sum % 2 == 0 ? printf("YES") : printf("NO");
}
