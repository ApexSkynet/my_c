#include <stdio.h>
#define N 5

void input(int elements[], int n)
{
	int i;
	for (i =0; i < 5; i++)
	{
		scanf("%d",&elements[i]);
	}	
}

int min(int elements[], int n)
{
	int min = elements[0];
	for (int i = 0; i<n; i++)
		if (min > elements[i])
		 min = elements[i];
	return min;
}

int main(void)
{
	int elements[N] = {0};
	input(elements,N);
	
	printf("%d\n", min(elements,N));
	return 0;
	
}
