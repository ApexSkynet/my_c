#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <inttypes.h>
#include <locale.h>
#define N 1000

int missedNumber(int arr[], int n)
{
	for(int i = 0; i< n-1; i++)
		if(((arr[i]-arr[i+1]) != 1) && (arr[i]!=arr[i+1]))
			return arr[i]-1;
		
}

void input(int arr[], int n)
{
	for(int i = 0; i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i] == 0)
			break;
	}
}

void swapArr(int arr[], int i, int j)
{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		
}

void bubbleSorting(int arr[], int n)
{
	//int sortedArray[n];
	for(int i = 0; i<n; i++)
		{
			for(int j = n-1; j>i; j--)
				if(arr[j-1] < arr[j])
					{
						swapArr(arr,j-1,j);
					}
		}
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
	int elements[N]={0};
	input(elements,N);
	bubbleSorting(elements,N);
	printf("%d\n",missedNumber(elements,N));
	return 0;
}
