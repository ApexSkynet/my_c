#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main(void)
{
	FILE *f, *out;
	int num;
	f=fopen("input.txt","r");
	fscanf(f,"%d",&num);
	char s[num+1];
	s[0] = 'A';
	for(int i = 1; i<num;i++)
	{
		if(i%2 != 0 && i <= 8)
			s[i] = 0x31+i;
		else if (i%2 != 0 && i/8 >= 1)
			s[i] = 0x31 + (i - i/8*8);
		else
			s[i] = s[i-2] + 1;
	}
	out = fopen("output.txt","w");
	s[num] = '\0';
	fprintf(out, "%s", s);
	fclose(f);
	fclose(out);
	
	return 0;
}
