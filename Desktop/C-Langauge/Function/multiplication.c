#include<stdio.h>
int multiplication(int a,int b);

int main()
{
    //int a,b;
    int c=multiplication(10,10);
    int d=multiplication(20,20);
    printf("c=%d\n",c);
    printf("d=%d",d);

    return 0;
}

int multiplication(int a,int b)
{
    int c=a*b;
    return c;
}