#include<stdio.h>
int main()
{
    int i,sum=0;
    for (i=101;i>=1;--i)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
