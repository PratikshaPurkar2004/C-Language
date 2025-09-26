#include<stdio.h>
int main()
{
    int i=2,n;
    printf("enter number:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
            printf("%d\n",i);
        ++i;
    }
    return 0;
}