#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int cnt[101] = {0};
    for (int i = 0; i < n; i++)
    {

        cnt[a[i]]++;
    }

    printf("%d", cnt[100]);
    return 0;
}