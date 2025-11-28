#include<stdio.h>
int iseven(int n);

int main()
{
    int n;
    printf("enter num:");
    scanf("%d",&n);
    if(iseven(n))
        printf("even");
    else
        printf("odd");

    return 0;
}

int iseven(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}
