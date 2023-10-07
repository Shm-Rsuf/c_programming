#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int digit = x / 1000;
    // printf("%d", digit);
    if (digit % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}