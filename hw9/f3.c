#include <stdio.h>
#include <string.h>
#include <inttypes.h>

void digits()
{
	uint8_t digitCounter[10] = {0};
	int c;
	while ((c=getchar()) != '\n')
	{
		digitCounter[c-'0']++;
	}
	for(int j = 0;j < 10;j++)
		if(digitCounter[j] != 0)
			printf("%d %d\n",j,digitCounter[j]);
}

int main(int argc, char **argv)
{
	digits();
	return 0;
}
