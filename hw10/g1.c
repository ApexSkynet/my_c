#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main(void)
{
	FILE *f, *out;
	int size;
	f=fopen("input.txt","r");
	fseek(f,0,SEEK_END);
	size = ftell(f);
	printf("%d\n",size);
	char s[size];
	fseek(f,0,SEEK_SET);
	out = fopen("output.txt","w");
	fscanf(f,"%[^\n]",s);
	fprintf(out, "%s, %s, %s %d", s, s, s, size-1);
	fclose(f);
	fclose(out);
	
	return 0;
}
