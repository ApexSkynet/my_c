
#include <stdio.h>
#include <inttypes.h>

void print_simple(int n);

int main()
{
	int number;
	scanf("%d",&number);
	print_simple(number);
	return 0;
}

void print_simple(int n)
{
	for (int i = 2; n/i >= 1; i++)
	{
		while(n%i == 0)
		{
			n /= i;
			printf("%d ",i);
		}
	}
	
}
