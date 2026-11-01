#include <stdio.h>
#define N 10

void input(int elements[], int n)
{
	for (int i =0; i < n; i++)
	{
		scanf("%d",&elements[i]);
	}	
}

int min(int elements[], int n)
{
	int min = elements[0];
	
	for (int i = 0; i<n; i++)
	{
		if (min > elements[i])
		 min = elements[i];
	 }
	return min;
}

int posMin(int elements[], int n)
{
	int posMin=0;
	int min = elements[0];
	for (int i = 0; i<n; i++)
	{
		if (min > elements[i])
		{
		 min = elements[i];
		 posMin = i;
		}
	}
	return posMin+1;
}

int max(int elements[], int n)
{
	int max = elements[0];
	for (int i = 0; i<n; i++)
		if (max < elements[i])
		 max = elements[i];
	return max;
}

int posMax(int elements[], int n)
{
	int posMax=0;
	int max = elements[0];
	for (int i = 0; i<n; i++)
	{
		if (max < elements[i])
		{
		 max = elements[i];
		 posMax = i;
		}
	}
	return posMax+1;
}


int main(void)
{
	int elements[N] = {0};
	input(elements,N);
	
	printf("%d %d %d %d", posMax(elements,N), max(elements,N),posMin(elements,N),min(elements,N));
	return 0;
	
}
