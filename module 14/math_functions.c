#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    scanf("%lf",&x);
    // int res = ceil(x);
    // int res = floor(x);
    // int res = round(x);
    int res = sqrt(x);
    printf("%d",res);
    return 0;
}