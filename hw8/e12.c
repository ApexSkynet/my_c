#include <stdio.h>
#define N 10
void print(int size, int arr[])
{
	for(int i = 0; i<size;i++)
		printf("%d ", arr[i]);
}

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

void bubbleSortingDouble(int elements[], int n)
{
	//int sortedArray[n];
	for(int i = 0; i<n/2; i++)
		{
			for(int j = n/2-1; j>i; j--)
				if(elements[j-1] > elements[j])
					{
						swapArr(elements,j-1,j);
					}
		}
	for(int i = n/2; i<n; i++)
		{
			for(int j = n-1; j>i; j--)
				if(elements[j-1] < elements[j])
					{
						swapArr(elements,j-1,j);
					}
		}
}

int main()
{
	int elements[N] = {0};
	input(elements,N);
	bubbleSortingDouble(elements,N);
	print(N,elements);
	return 0;
}

