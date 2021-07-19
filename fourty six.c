#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d %d %d", &i, &j, &n);
    int sum = i + j + n;
    float avg = (float)sum / 3;
    printf("%d\n%.1f", sum, avg);
    return 0;
}