#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    if (x > 0) printf("plus\n");
    else printf("minus\n");

    if (x % 2 == 0) printf("even\n");
    else printf("odd\n");

    return 0;
}
