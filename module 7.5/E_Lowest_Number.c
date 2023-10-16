#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int lower = INT_MAX;
    int position;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < lower)
        {
            lower = arr[i];
            position = i;
        }
    }
    printf("%d %d", lower, position + 1);
    return 0;
}