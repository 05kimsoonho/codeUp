#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c, d, e;
	scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
	printf("[%d", a * 10000);
	printf("[%d", b * 1000);
	printf("[%d", c * 100);
	printf("[%d", d * 10);
	printf("[%d", e * 1);
	return 0;
}