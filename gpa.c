#include<stdio.h>
int main()
{
    double mark;
    scanf("%lf",&mark);
    if (mark>=80)
    {
        printf("A+");
    }
    else if (mark<80 && mark>=70)
    {
        printf("A");
    }
    else if (mark<70 && mark>=60)
    {
        printf("A-");
    }
    else if (mark<60 && mark>=50)
    {
        printf("B");
    }
    else if (mark<50 && mark>=40)
    {
        printf("C");
    }
    else if (mark<40 && mark>=33)
    {
        printf("D");
    }
    else
        printf("F");
    return 0;
}
