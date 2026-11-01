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

void secondZero(int elements[],int n)
{
	
	int count=0;
	for (int i = 0; i<n;i++)
	{
		if((elements[i]/10)%10 == 0)
			{
			count+=1;
			}
	}
	int b[count];
	int b_index=0;
	for (int j = 0; j<n;j++)
	{
		if((elements[j]/10)%10 == 0)
		{
			
			b[b_index]=elements[j];
			b_index+=1;
		}
	}
	print(count,b);
}


int main()
{
	int elements[N] = {0};
	input(elements,N);
	secondZero(elements,N);
	return 0;
}

