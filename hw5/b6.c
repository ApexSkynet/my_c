
#include <stdio.h>


int main()
{
	int n,f1,f2,count1 = 0,count2 = 0;
	scanf("%d",&n);
	while (n != 0){
		 count1++;
		 
		 f1 = n%10;
		 n/=10;
		 f2 = n%10;
		 if (f1 == f2){
			 break;
		 }
		 else
		 {
			count2++;
		 }
		  
	}
	count1 == count2 ? printf("NO") : printf("YES");
	return 0;
}

