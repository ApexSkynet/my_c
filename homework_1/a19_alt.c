
#include <stdio.h>
#include <locale.h>
#include <inttypes.h>

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	a < (b+c) && b < (a+c) && c < (a+b) ? printf("YES") : printf("NO");
	//if (a < (b+c) && b < (a+c) && c < (a+b))
		//printf("YES");
	//else
	// 	printf("NO");
	
	
	
    return 0;
}

