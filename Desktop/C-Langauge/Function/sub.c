#include<stdio.h>
int main()
{
    int a,b;
    int c=subtract(20,10);
    printf("c=%d",c);
    return 0;
}

int subtract(int a,int b)
{
    int c=a-b;
    return c;
}