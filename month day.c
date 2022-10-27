#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    if (m==1)
    {
        printf("January");
    }
    else if (m==2)
        printf("February");
    else if (m==3)
        printf("March");
    else if (m==4)
        printf("April");
    else if (m==5)
        printf("May");
    else
        printf("December");
    return 0;

}
