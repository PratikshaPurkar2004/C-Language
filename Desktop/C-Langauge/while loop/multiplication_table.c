#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter number:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d*%d=%d\n",i,n,i*n);
        i++;
    }
    return 0;
}