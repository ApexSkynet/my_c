
#include <stdio.h>


int main()
{
	int n, f1, count=0, countEven=0;
	scanf("%d",&n);
	
	while (n != 0){
		 count++;
		 f1 = n%10;
		 n/=10;
		 //printf("%d\n",f1%2);
		 if(f1%2 == 0){
			 countEven++;
		 }
		 else
		 {
			 continue;
		 };
	}
	count == countEven ? printf("YES"): printf("NO");
	
	
	return 0;
}

