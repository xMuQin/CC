//º¯ÊıÖ¸Õë
#include <stdio.h>
typedef int (*D)(int);
int get_sum(int n)
{
	int i, sum = 0;
	for (i = 0; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}

int main()
{
	D d;
	//int (*d)(int);
	d = get_sum;

	printf("%d\n", get_sum(100));
	printf("%d\n", (*d)(100));
	return 0;
}