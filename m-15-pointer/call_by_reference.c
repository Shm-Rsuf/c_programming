#include<stdio.h>
void fun(int * p)
{
    printf("p er man - %d\n",*p);
    *p = 500;
}

int main()
{
    int x = 100;
    int * p = &x;
    fun(&x);
    printf("x er add - %p\n",&x);
    printf("x er new val - %d\n",x);
    return 0;
}