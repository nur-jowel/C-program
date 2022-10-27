#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if (x>0 && y>0)
        printf("First quadrant");
    else if(x<0 && y>0)
        printf("Second quadrant");
    else if (x<0 && y<0)
        printf("Thrird quadrant");
    else if (x>0 && y<0)
        printf("Fourth quadrant");
    return 0;
}
