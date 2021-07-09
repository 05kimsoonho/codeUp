#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j;
	scnaf("%d-%d", i, j);
	printf("%06d%07d", i, j);
	return 0;
}