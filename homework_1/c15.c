
#include <stdio.h>

int grow_up(int n);

int main()
{
	int number;
	scanf("%d",&number);
	grow_up(number);
	return 0;
}

int grow_up(int n)
{
	int f1,f2,countNo=0;
	while (n != 0){
		 f1 = n%10;
		 n/=10;
		 f2 = n%10;
		 if(f1 < f2 || f1 == f2)
		 {
			 countNo++;
		 }
		}
	countNo != 0 ? printf("NO"): printf("YES");
	return countNo;
}
