#include<stdio.h>
int reverce(int n);
int main()
{
    int n,Rev;
    printf("enetr a num::");
    scanf("%d",&n);
    Rev=reverce(n);
    printf("%d ",Rev);
    return 0;
}

int reverce(int n)
{
    int rev=0;
    while(n!=0)
    {
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
     return rev;
}