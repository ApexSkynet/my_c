#include <stdio.h>
#define N 12

void input(int elements[], int n)
{
	for (int i =0; i < n; i++)
	{
		scanf("%d",&elements[i]);
	}	
}

float mean(int elements[], int n)
{
	float sum = 0.;
	for(int i = 0; i < n; i++)
	{
		sum += elements[i];
	}
	return sum/n;
}

int main(void)
{
	int elements[N] = {0};
	input(elements,N);
	printf("%.2f\n", mean(elements,N));
	return 0;
	
}
