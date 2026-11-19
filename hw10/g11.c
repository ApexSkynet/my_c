#include <stdio.h>
#include <stdint.h>
#include <string.h>
#define N 1000

int main(void)
{
	FILE *f, *out;
	f=fopen("input.txt","r");
	char tempC[N];
	int count = 0;
	while(fscanf(f,"%s",tempC) == 1)
	{
		if(tempC[strlen(tempC)-1] == 'a')		
			count++;
	}
	printf("%d\n", count);
	fclose(f);
	out = fopen("output.txt","w");
	fprintf(out,"%d",count);
	
	fclose(out);
	
	return 0;
}
