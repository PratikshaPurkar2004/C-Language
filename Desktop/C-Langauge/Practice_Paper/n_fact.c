#include<stdio.h>
int main()
{
    int n,fact=1,k;
    printf("enter num:");
    scanf("%d",&n);
    for(k=1;fact*(k+1)<=n;k++)
    {
        fact=fact*(k+1);
    }
    printf("k=%d",k);
    return 0;
}