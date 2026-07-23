#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int strtj(char* a)
{
	int i = 0;
	while (*a != '\0')
	{
		if (*a >= 'a' && *a <= 'z')	   *a -= 32;
		else if (*a >= 'A' && *a <= 'Z') *a += 32;
		a++;
		i++;
	}
	return i;
}

int main()
{
	char s[100];
	scanf("%s", s);
	int strSL = strtj(s);
	printf("%d %s\n",strSL,s);
	return 0;
}