#include <stdio.h>
#define N 10

void input(int elements[], int n)
{
	for (int i =0; i < n; i++)
	{
		scanf("%d",&elements[i]);
	}	
}

void replace(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void shift(int size, int arr[])
{
	int t = arr[size-1];
	for(int i=size-1; i != 0; i--){
		arr[i] = arr[i-1];
	}
	arr[0] = t;
	
}

void print(int size, int arr[])
{
	for(int i = 0; i<size;i++)
		printf("%d ", arr[i]);
}

int main(void)
{
	int elements[N] = {0};
	input(elements,N);
	shift(N,elements);
	print(N, elements);
	return 0;
	
}
