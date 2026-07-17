#include <stdio.h>

int main()
{
	int (*p)[4];
	int a[3][4] = { {9,4,6,8},{9,6,5,8},{3,1,6,4} };
	int i, j;
	int h, l;
	h = sizeof(a) / sizeof(a[0]);
	l = sizeof(a[0]) / sizeof(int);
	p = a;
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < l; j++)
		{
			printf("%d %d %d ", p[i][j], *(p[i] + j), *(*(p + i) + j));
		}
		printf("\n");
	}
	return 0;
}
//