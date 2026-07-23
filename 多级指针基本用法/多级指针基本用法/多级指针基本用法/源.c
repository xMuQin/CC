#include <stdio.h>

int main()
{
	int a = 10;
	int* p = &a;
	int** q = &p;
	printf("%d %p %p\n", a, p, q);
	printf("%p %p %p\n", &a,&p, &q);
	printf("%ld %ld %ld\n", sizeof(a), sizeof(p), sizeof(q));
	return 0;
} 