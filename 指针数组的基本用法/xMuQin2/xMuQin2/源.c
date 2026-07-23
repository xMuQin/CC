#include <stdio.h>

int main()
{
	char* p2[3] = {"BeiJing","ShangHai","TianJin"};
	for (int i = 0; i < sizeof(p2) / sizeof(char*);i++)
	{
		printf("%s\n", p2[i]);
	}
	
	/*
	int a[] = { 9,6,3,8,4,9 };
	int* p[6];
	int i;
	
	for (i = 0; i < sizeof(a)/sizeof(int); i++)
		p[i] = &a[i];
	
	for (i = 0; i < sizeof(a) / sizeof(int); i++)
		printf("%d\n", *p[i]);
	*/
	return 0;
}