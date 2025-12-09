#include<stdio.h>
int Max3(int a,int b,int c);
int main()
{
    int a,b,c;
    printf("enetr a three num(a,b,c)::");
    scanf("%d %d %d",&a,&b,&c);
    int max=Max3(a,b,c);
    printf("%d is max",max);
    return 0;
}

int Max3(int a,int b,int c)
{
    if(a>b&&a>c)
        return a;
    else if(b>a&&b>c)
        return b;
    else
        return c;
}