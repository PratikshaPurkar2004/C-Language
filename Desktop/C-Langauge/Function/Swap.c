#include<stdio.h>
int Swap(int *a,int *b);
int main()
{
    int a,b;
    printf("enter two num::");
    scanf("%d %d",&a,&b);
    Swap(&a,&b);
    printf("a=%d\n b=%d ",a,b);
    return 0;
}

int Swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}