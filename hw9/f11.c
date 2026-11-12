#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <inttypes.h>
#include <locale.h>
#define N 30

void minSum(int s[], int n)
{
	int indMin = 0;
	int indMin2= 1;
	int sum = s[indMin] + s[indMin2];
	for(int i =0; i<n; i++)
	{
		for(int j = 1;j<n;j++)
			if(i != j && (s[i] + s[j]) < sum)
			{
				sum = s[i] + s[j];
				indMin = i;
				indMin2 = j;
			}
	}	
	printf("%d %d\n", indMin, indMin2);
}

void input(int arr[], int n)
{
	for(int i = 0; i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}

int main(void)
{
	int s[N];
	input(s,N);
	minSum(s, N);
	return 0;
}
