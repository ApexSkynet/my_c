#include <stdio.h>
#define N 5

void input(int elements[], int n)
{
	int i;
	for (i =0; i < 5; i++)
	{
		scanf("%d",&elements[i]);
	}	
	//return i;
}

float mean(int elements[], int n)
{
	int sum = 0;
	for (int i = 0; i<n;i++)
		sum += elements[i];
	
	return (float)sum/n;
}

int main(void)
{
	int elements[N] = {0};
	input(elements,N);
	
	printf("%.3f\n", mean(elements,N));
	return 0;
	
}
