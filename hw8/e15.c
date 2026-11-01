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


void signNums(int elements[],int n)
{
	int countPos = 0;
	int countNeg = 0;
	
	for(int i = 0;i<n;i++)
	{
		if(elements[i]<0)
		{
			countNeg+=1;
		}
		else if (elements[i]>0)
		{
			countPos += 1;
		}
	}
	
	int posNums[countPos];
	int negNums[countNeg];
	int pos_index=0;
	int neg_index=0;
	for(int i = 0;i<n;i++)
	{
		if(elements[i] < 0)
		{
			negNums[neg_index] = elements[i];
			neg_index +=1;
		}
		else if(elements[i] >0)
		{
			posNums[pos_index] = elements[i];
			pos_index +=1;
		}
	}
	print(countPos,posNums);
	print(countNeg,negNums);
}



int main()
{
	int elements[N] = {0};
	input(elements,N);
	signNums(elements,N);
	return 0;
}

