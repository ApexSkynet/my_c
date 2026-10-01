
#include <stdio.h>
#include <math.h>


int main()
{
	int n,cd,max,min;
	scanf("%d",&n);
	
	min = n%10;
	max = n%10;
	n /= 10;
	while (n != 0)
	{
		cd = n % 10;
		min = cd < min ? cd : min;
		max = cd > max ? cd : max;
		
		n/=10;
	}
	
	printf("%d %d\n",min, max);
	
	
	return 0;
}

