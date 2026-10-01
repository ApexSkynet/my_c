
#include <stdio.h>


int main()
{
	int n, count=0;
	scanf("%d",&n);
	while (n != 0){
		count++;
		n = n/10;
	}
	switch (count){
		case 3:
			printf("YES\n");
			break;
		default:
			printf("NO\n");
	}
	
    return 0;
}

