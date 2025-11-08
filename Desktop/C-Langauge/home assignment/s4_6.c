#include<stdio.h>
int main()
{
    int n;
    printf("enter an integer::");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        printf("%d*%d=%d\n",i,n,i*n);
        i++;
    }
    return 0;
}