#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_hello()
{
	printf("Hello World!\n");
}

int MAXSZ(int a, int b)
{
	if (a > b)	return a;
	else		return b;
}

int main()
{
	//print_hello();

	int i, j;
	scanf("%d%d", &i, &j);
	int get=MAXSZ(i, j);
	printf("max:%d\n",get);

	return 0;
}