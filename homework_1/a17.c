
#include <stdio.h>
#include <locale.h>
#include <inttypes.h>

int main()
{
	int a;
	scanf("%d",&a);
	if (a >=3 && a <= 5)
	{
		printf("spring");
	} else if (a >=  6 && a <= 8){
		printf("summer");
	}else if (a >= 9 && a <= 11){
		printf("autumn");
	}else{
		printf("winter");
	}
	
	
    return 0;
}

