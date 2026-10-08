
#include <stdio.h>
#include <math.h>


int main()
{
	int n,number,count=0, inv_n=0, n_rank;
	scanf("%d",&n);
	number = n;
	while (n != 0)
	{
		count++;
		n/=10;
	}
	n_rank = pow(10,count-1);
	for (int i =1; i<=count; i++)
	{
		inv_n += (number%10)*n_rank;
		n_rank /=10;
		number /=10;
	}	 
	printf("%d\n",inv_n);
	
	
	return 0;
}

