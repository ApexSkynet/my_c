#include <stdio.h>
#include <stdint.h>
#include <string.h>
#define N 1000

int main(void)
{
	FILE *f, *out;
	f=fopen("input.txt","r");
	out = fopen("output.txt","w");
	char tempC[N];
	while(fscanf(f,"%s",tempC) == 1)
	{
		fprintf(out,"%s\n",tempC);
	}
	fclose(f);
	fclose(out);
	
	return 0;
}
