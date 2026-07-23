#include <stdio.h>

int main()
{
	char s[] = "Hello World!";
	char* p = s;
	
	while (*p!='\0')
	{
		if(*p>='A' && *p<='Z')
		{
			*p += 32;
		}
		else if(*p >= 'a' && *p <= 'z')
		{
			*p -= 32;
		}
		p++;
	}
	printf("%s\n", s);
	return 0;
}