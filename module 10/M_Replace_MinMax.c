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

    int min = INT_MAX, max = INT_MIN;
    int minPos = 0, maxPos = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minPos = i;
        }

        if (arr[i] > max)
        {
            max = arr[i];
            maxPos = i;
        }
    }
    arr[minPos] = max;
    arr[maxPos] = min;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}