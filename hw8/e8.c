#include <stdio.h>
#define N 12

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
	for(int i=0; i < size/6; i++){
		replace(&arr[i], &arr[size/3-1-i]);
		replace(&arr[i+size/3], &arr[2*size/3-1-i]);
		replace(&arr[i+2*size/3], &arr[size-1-i]);
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
