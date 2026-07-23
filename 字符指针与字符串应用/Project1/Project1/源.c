#include <stdio.h>

int main()
{
	char s[20] = "Hello";
	char* p = "World";
	char* zz = s;
	char* jg = p;
	while (*zz != '\0')
	{
		zz++;
	}
	while (*jg != '\0')
	{
		*zz = *jg;
		jg++;
		zz++;
	}
	*zz = '\0';
	printf("%s\n", s);
	return 0;
}