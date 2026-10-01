
#include <stdio.h>
#include <math.h>


int main()
{
	int n,cd,oddEven,countOdd=0,countEven=0;
	scanf("%d",&n);
	while (n != 0)
	{
		cd = n % 10;
		oddEven = cd%2;
		switch (oddEven) 
		{
			case 0:
			countEven++;
			break;
			default:
			countOdd++;
		}
		
		n/=10;
	}
	
	printf("%d %d\n",countEven, countOdd);
	
	
	return 0;
}

