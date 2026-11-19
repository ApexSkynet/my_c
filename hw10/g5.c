#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main(void)
{
	FILE *f, *out;
	char c;
	f=fopen("input.txt","r");
	out = fopen("output.txt","w");
	while((c=fgetc(f)) != EOF)
	{
		if(c == 'a')
		{
			printf("%c\n",c);
			fprintf(out,"%c",'b');
		}
		else if(c == 'b')
		{
			printf("%c\n",c);
			fprintf(out,"%c",'a');
		}
		else if(c == 'A')
		{
			printf("%c\n",c);
			fprintf(out,"%c",'B');
		}	
		else if(c == 'B')
		{
			printf("%c\n",c);
			fprintf(out,"%c",'A');
		}
		else
		{
			printf("%c\n",c);
			fprintf(out,"%c",c);
		}
	}
	fclose(f);
	fclose(out);
	
	return 0;
}
