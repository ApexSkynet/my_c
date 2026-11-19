#include <stdio.h>
#include <stdint.h>
#include <string.h>
#define N 1000

int main(void)
{
	FILE *f, *out;
	f=fopen("input.txt","r");
	char tempC[N], maxC[N] ="";
	while(fscanf(f,"%1000s",tempC) == 1)
	{
		tempC[strlen(tempC)] = '\0';
		if(strlen(tempC) > strlen(maxC))
			strncpy(maxC,tempC, strlen(tempC));
	}
	printf("%s\n", maxC);
	fclose(f);
	out = fopen("output.txt","w");
	fprintf(out,"%s",maxC);
	
	fclose(out);
	
	return 0;
}
