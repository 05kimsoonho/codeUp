#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int i;
    char d[30];
    scanf("%s", d);
    for (i = 0; d[i] != '\0'; i++)
    {
        printf("\'%c\'\n", d[i]);
    }
    return 0;
}