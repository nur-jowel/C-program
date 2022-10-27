#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    if (r==1)
        printf("Your salary: 2,50,000BDT");
    else if (r==2)
        printf("Your salary: 2,10,000BDT");
    else if (r==3)
        printf("Your salary: 1,50,000BDT");
    else if (r==4)
        printf("Your salary: 80,000BDT");
    else if (r>=5)
        printf("Your salary: 50,000BDT");
    return 0;
}
