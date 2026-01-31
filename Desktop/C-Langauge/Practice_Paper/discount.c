#include<stdio.h>
int main()
{
    int amt;
    printf("enter a amount:");
    scanf("%d",&amt);
    if(amt<50)
        printf("discount is 0");
    else if(50<amt&&amt<100)
        printf("discount is 10");
    else if(101<amt&&amt<200)
        printf("discount is 20");
    else
        printf("discount is 30");
    return 0;
}