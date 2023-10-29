#include<stdio.h>
#include<string.h>

void fun(char arr[])
{
    int len = strlen(arr);
    printf("%d\n",len);
}

int main()
{
    char arr[6]="Hello";
    fun(arr);
    return 0;
}