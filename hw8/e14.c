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

void bubbleSorting(int elements[], int n)
{
	for(int i = 0; i<n; i++)
		{
			for(int j = n-1; j>i; j--)
				if(elements[j-1] > elements[j])
					{
						swapArr(elements,j-1,j);
					}
		}
}


void repeatedNums(int elements[],int n)
{
	int count = 0;
	
	for(int i = 0;i<n;i++)
	{
		if(elements[i]==elements[i+1])
		{
			while(elements[i] == elements[i+1]){i++;};
			count+=1;
		}
	}
	
	int repeats[count];
	int repeats_index=0;
	for(int i = 0;i<n;i++)
	{
		if(elements[i] == elements[i+1])
		{
			while(elements[i] == elements[i+1]){i++;};
			repeats[repeats_index] = elements[i];
			repeats_index+=1;
		}
	}
	print(count,repeats);
}



int main()
{
	int elements[N] = {0};
	input(elements,N);
	bubbleSorting(elements,N);
	repeatedNums(elements,N);
	return 0;
}

