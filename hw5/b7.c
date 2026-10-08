
#include <stdio.h>


int main()
{
	int n,f1,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count0=0;
	scanf("%d",&n);
	while (n != 0){
		 f1 = n%10;
		 n/=10;
		 switch(f1){
			 case 0:
				count0++;
				break;
			case 1:
				count1++;
				break;
			case 2:
				count2++;
				break;
			case 3:
				count3++;
				break;
			case 4:
				count4++;
				break;
			case 5:
				count5++;
				break;
			case 6:
				count6++;
				break;
			case 7:
				count7++;
				break;
			case 8:
				count8++;
				break;
			case 9:
				count9++;
				break;
		 
		}
	}
	
	if(count1 > 1 || count2 > 1 || count3 > 1 || count4 > 1 || count5 > 1 || count6 > 1 || count7 > 1 || count8 > 1 || count9 > 1 || count0 > 1)
		printf("YES\n");
	else
		printf("NO\n");
	
	return 0;
}

