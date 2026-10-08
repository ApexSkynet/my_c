#include <stdio.h>

void sequenceNumbers(int n,int m)
{
	if(n>=m)
	{
		printf("%d ",n);
		if(n!=m)
			sequenceNumbers(n-1,m);
	}
	else
	{
		if(n<=m)
		{
			printf("%d ",n);
			sequenceNumbers(n+1,m);
		}
	}
}

int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	sequenceNumbers(a,b);
	return 0;
}

