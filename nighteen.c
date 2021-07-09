#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int y, m, d;
	scanf("%04d.%d.%d", &y, &m, &d);
	pritnf("%04d.%02d.%02d", y, m, d);
	return 0;
}