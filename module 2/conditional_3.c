#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=5000)
    {
        printf("Cox's bazar jabo\n");
        if(tk>=10000)
        {
            printf("Saint martin jabo\n");
        }
        else{
            printf("ferot asbo\n");
        }
    }
    else
    {
        printf("kothao jabo na\n");
    }
    return 0;
}