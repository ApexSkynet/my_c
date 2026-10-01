
#include <stdio.h>


int main()
{
	int n,f1,count9=0;
	scanf("%d",&n);
	while (n != 0){
		 f1 = n%10;
		 n/=10;
		 switch(f1){
			 case 9:
				count9++;
				break;
			default:
				break;
		 
		}
	}
	
	if(count9 == 1 )
		printf("YES\n");
	else
		printf("NO\n");
	
	return 0;
}

