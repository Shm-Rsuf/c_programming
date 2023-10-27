#include<stdio.h>

void print(void)
{
    int a, b;
    scanf("%d %d",&a, &b);
    int res = a+b;
    printf("%d",res);
}

int main()
{
    print();
    return 0;
}