#include <stdio.h>

int main()
{
	char* s[5]={ {"apple"},{"pear"},{"banana"},{"orange"},{"peach"}};
	char** ps = s;
	printf("%s\n", *(ps+1));
	return 0;
}