#include <stdio.h>
typedef char uchar;
typedef char* puchar;
int main() 
{
	unsigned char ch1 = 'A';
	uchar ch2 = 'B';
	puchar p, q;
	puchar* r;

	p = &ch1;
	q = &ch2;
	r = &p;

	printf("%c %c %c\n", ch1,*p,**r);
	printf("%c %c\n", ch2,*q);

	return 0;
}