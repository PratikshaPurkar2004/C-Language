#include<stdio.h>
int main()
{
    int n,sqr;
    printf("enter num::");
    scanf("%d",&n);
    sqr=Square(n);
    printf("%d ",sqr);
    return 0;
}

int Square(int n)
{
    int sqr=n*n;
    return sqr;
}