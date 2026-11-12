#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#define K 25

void input(int c[], int n)
{
	for(int i = 0; i<n; i++)
		scanf("%d",&c[i]);
	
}

void matrixTrace(int c[], int n)
{
	int trace = 0;
	for(int i = 0; i < n; i+=6)
	{
		trace += c[i];
	}
	printf("%d\n", trace);
}

int main(int argc, char **argv)
{
	int c[K];
	input(c,K);
	matrixTrace(c,K);
	return 0;
}
