
#include <stdio.h>


int main()
{
	int n, f1,f2, countNo=0;
	scanf("%d",&n);
	
	while (n != 0){
		 f1 = n%10;
		 n/=10;
		 f2 = n%10;
		 if(f1 < f2 || f1 == f2)
		 {
			 countNo++;
		 }
		 else
		 {
		 }
	}
	countNo != 0 ? printf("NO"): printf("YES");
	
	
	return 0;
}

