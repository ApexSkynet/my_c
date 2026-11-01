#include <stdio.h>
#define N 10

void input(int elements[], int n)
{
	for (int i =0; i < n; i++)
	{
		scanf("%d",&elements[i]);
	}	
}

void swapArr(int elements[], int i, int j)
{
		int temp = elements[i];
		elements[i] = elements[j];
		elements[j] = temp;
		
}

void bubbleSorting(int elements[], int n)
{
	//int sortedArray[n];
	for(int i = 0; i<n; i++)
		{
			for(int j = n-1; j>i; j--)
				if(elements[j-1] > elements[j])
					{
						swapArr(elements,j-1,j);
					}
		}
}


int sum2max(int elements[], int n)
{
	return elements[n-1]+elements[n-2];
}
void print(int elements[], int n)
{
	for(int i = 0; i<n; i++)
	{
		printf("%d ", elements[i]);
	}
	printf("\n");
}

int main(void)
{
	int elements[N] = {0};
	input(elements,N);
	bubbleSorting(elements,N);
	printf("%d\n", sum2max(elements,N));
	return 0;
	
}
