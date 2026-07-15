#include <stdio.h>

int main()
{
	int a[3] = { 1,2,3 };
	int (*p)[3];
	p = &a;

	for (int i = 0; i < 3; i++)
	{
		printf("%d %d\n", a[i], (*p)[i]);
	}

	return 0;
}