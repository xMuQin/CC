#include <stdio.h>

int main()
{
	/*
	int* p[4];
	printf("%ld\n", sizeof(p));
	printf("%p %p\n", p, p + 1);
	*/

	int a = 10, b = 20, c = 30;
	int* p[3];
	p[0] = &a;
	p[1] = &b;
	p[2] = &c;
	printf("sizeof:%llu\n", sizeof(p));
	printf("%p %p\n", p, p + 1); 
	return 0;
}