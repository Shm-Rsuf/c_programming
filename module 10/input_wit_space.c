#include <stdio.h>
#include <string.h>
int main()
{
    char s[25];
    fgets(s, 19, stdin);
    s[17] = '\0';
    printf("%s", s);
    return 0;
}