#include<stdio.h>
int main()
{
    int m,i,l;
    scanf("%d",&m);
    for (i=1;i<=10;i++)
    {
        l=i*m;
        printf("%d x %d= %d\n",m,i,l);
    }
    return 0;
}
