#include<stdio.h>

int sum()
{
    int a, b;
    scanf("%d %d",&a,&b);
    int res = a+b;
    return res;
}

int main()
{
    printf("%d",sum());
    return 0;
}