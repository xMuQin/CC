#include <stdio.h>
typedef int (*PTR_TO_ARRAY)[3];
int main()
{
	int a[3] = { 1,2,3 };
	//int (*p)[3];
	PTR_TO_ARRAY p;
	p = &a;

	for (int i = 0; i < 3; i++)
	{
		printf("%d %d\n", a[i], (*p)[i]);
	}

	return 0;
}