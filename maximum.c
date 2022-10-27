#include<stdio.h>
int main()
{
    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("max=a");
    }
    else if(b>c)
    {
        printf("max=b");
    }
    else
        printf("max=c");
    return 0;
}
