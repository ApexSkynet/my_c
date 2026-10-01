
#include <stdio.h>

int main()
{
	int n1,n2,r=1;
	scanf("%d %d", &n1, &n2);
	
	if (n1 < n2){
		n1 = n1 + n2;
		n2 = n1 - n2;
		n1 = n1 - n2;
	}
	else
	{
	}
	while (r != 0){
		r = n1%n2;
		n1 = n2;
		n2 = r;
	}
	
	
	printf("%d \n",n1);
	
	
	return 0;
}

