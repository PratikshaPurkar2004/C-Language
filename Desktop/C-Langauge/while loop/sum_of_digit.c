#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("enter a num::");
    scanf("%d",&n);
    while(n!=0)
    {
        int rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("sum of digit::%d",sum);
    return 0;
}