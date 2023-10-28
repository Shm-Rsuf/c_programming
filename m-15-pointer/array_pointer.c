#include<stdio.h>

int main()
{
    int arr[5]={10, 15, 20, 25, 30};
    // printf("0th er address - %p\n",&arr[0]);
    // printf("0th er address - %p\n",arr);

    // printf("0th er value - %d\n",arr[0]);
    // printf("0th er value - %d\n",*arr);

    // printf("0th er value - %d\n",arr[2]);
    // printf("0th er value - %d\n",*(arr+2));

    printf("%d\n",arr[1]);
    printf("%d\n",1[arr]);
    printf("%d\n",*(arr+1));
    printf("%d\n",*(1+arr));
    return 0;
}