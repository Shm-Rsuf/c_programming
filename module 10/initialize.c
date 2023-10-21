#include <stdio.h>
int main()
{
    char a[8] = "shmusuf";
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c", a[i]);
    // }
    int sz = sizeof(a);
    printf("%d\n", sz);
    printf("%s", a);
    return 0;
}