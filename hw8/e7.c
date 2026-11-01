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

void revers_array(int size, int arr[])
{
	for(int i=0; i < size/4; i++){
		replace(&arr[i], &arr[size/2-1-i]);
		replace(&arr[i+size/2], &arr[size-1-i]);
	}
	return;
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
	revers_array(N,elements);
	print(N, elements);
	return 0;
	
}
