#include <stdio.h>

void decToBin(int num)
{
	if(num/2 != 0)
	{
		decToBin(num/2);
	}
	printf("%d",num%2);
}

int main(void)
{
	int n;
	scanf("%d",&n);
	decToBin(n);
	return 0;
}

