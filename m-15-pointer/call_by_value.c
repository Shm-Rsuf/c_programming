#include<stdio.h>
void fun(int x)
{
    printf("fun er x er add - %p\n",&x);
}

int main()
{
    int x = 10;
    printf("main er x er add - %p\n",&x);
    fun(x);
    return 0;
}