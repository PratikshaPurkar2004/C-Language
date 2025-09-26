#include<stdio.h>
int main()
{
    int ans=0,n,rem;
    printf("enter number:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        ans=(ans*10)+rem;
        n=n/10;
    }
    printf("%d",ans);
    return 0;
}