#include <stdio.h>
//一级指针遍历二维数组
int main()
{
	int* p;
	int i, j;
	int a[3][4] = { {4,5,6,9} ,{ 8,4,3,5 } ,{ 9,5,3,4 } };
	int h = sizeof(a) / sizeof(a[0]);
	int l = sizeof(a[0]) / sizeof(int);
	/*for (i = 0; i < h; i++)
	{
		for (j=0; j < l; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}*/
	p = &a;
	for (i = 0; i < h * l; i++)
	{
		printf("%d\n", *(p + i));
	}
	return 0;
}