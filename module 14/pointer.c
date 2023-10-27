#include<stdio.h>
int main()
{
    int x=10;
    printf("%p\n",&x);
    int * p = &x;
    printf("%p\n",p);

    // to get value from pointer we have to do de reference
    printf("%d\n",*p);
    return 0;
}