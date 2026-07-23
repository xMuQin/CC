#include <stdio.h>

int main()
{
	int a[2][3] = { {1,5,6},{9,8,4} };
	int* p[2] = { a[0],a[1] };

	printf("%d\n", *(p[0] + 1));
	
	int i, j;
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		for (j = 0; j < sizeof(a[0]) / sizeof(int); j++)
		{
			printf("p[%d][%d] = %d |", i, j,p[i][j]);
		}
		printf("\n");
	}
	return 0;
}