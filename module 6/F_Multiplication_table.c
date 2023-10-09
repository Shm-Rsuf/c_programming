#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int res = 1;
    for (int i = 1; i <= 12; i++)
    {
        res = n * i;
        printf("%d * %d = %d\n", n, i, res);
    }
    return 0;
}