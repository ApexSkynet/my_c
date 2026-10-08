
#include <stdio.h>

int main()
{
	int n,d,sum=0;
	scanf("%d", &n);
	while(n!=0){
		d = n%10;
		sum += d;
		n /=10;
	}
	sum == 10 ? printf("YES") : printf("NO");
	return 0;
}

