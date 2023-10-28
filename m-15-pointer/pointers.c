#include<stdio.h>
int main()
{
    double x = 5.25;
    double * ptr = &x;
    printf("%0.2lf\n",x);
    printf("%0.2lf\n",*ptr);
    return 0;
}