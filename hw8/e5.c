#include <stdio.h>
#define N 10

void input(int elements[], int n)
{
	for (int i =0; i < n; i++)
	{
		scanf("%d",&elements[i]);
	}	
}

int sum10posElements(int elements[], int n)
{
	int sum = 0;
	for(int i=0; i<n; i++)
	{
		if(elements[i]>0)
			sum += elements[i];
	}
	 return sum;
}

int main(void)
{
	int elements[N] = {0};
	input(elements,N);
	printf("%d\n", sum10posElements(elements,N));
	return 0;
	
}
