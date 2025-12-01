#include<stdio.h>
int fib(int n);
int main()
{
    int n,f;
    printf("enter num::");
    scanf("%d",&n);
    f=fib(n);
    printf("%d ",f);
    return 0;
}

int fib(int n)
{
    int f1=0,f2=1,f3;
    for(int i=0;i<n;i++)
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
    return f2;
}