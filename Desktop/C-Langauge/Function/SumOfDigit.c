#include<stdio.h>
int SumDigit(int n);
int main()
{
    int n;
    printf("enter a num::");
    scanf("%d",&n);
    printf("sum of digit::%d",SumDigit(n));
    return 0;
}

int SumDigit(int n)
{
    int sum=0;
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}