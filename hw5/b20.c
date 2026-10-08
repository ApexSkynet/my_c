
#include <stdio.h>

int main()
{
	int n,count = 0;
	scanf("%d", &n);
	if(n==1){
		printf("NO");
		
	}
	else
	{
		for(int i = 1; i <= n; i++){
			if (n%i == 0)
				count ++;
		}
		count > 2 ? printf("NO") : printf ("YES");
	}
	
	
	return 0;
}

