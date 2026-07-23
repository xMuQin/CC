#include <stdio.h>

int main()
{
	int a = 10;
	int* p = &a;
	int** q = &p;

	printf("%d %p %p\n", a, p, q);
	printf("%p %p %p\n", &a, &p, &q);
	printf("%lu %lu %lu\n", sizeof(a), sizeof(p), sizeof(q));

	printf("%p %p\n", p, p+1);
	printf("%p %p\n", q, q+1);
	//指针移动的距离 = 降一级后的占用大小

	return 0;
}