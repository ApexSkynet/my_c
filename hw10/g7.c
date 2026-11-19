#include <stdio.h>
#include <stdint.h>
#include <string.h>



int main(void)
{
	FILE *f, *out;
	int countSmall = 0;
	int countBig = 0;
	char c;
	f=fopen("input.txt","r");
	while((c=fgetc(f)) != EOF)
	{
		if(c >= 'A' && c <='Z')
			countBig++;
		else if (c >= 'a' && c <= 'z')
			countSmall++;
	}
	fclose(f);
	out = fopen("output.txt","w");
	fprintf(out,"%d %d", countSmall, countBig);
 fclose(out);
	
	return 0;
}
