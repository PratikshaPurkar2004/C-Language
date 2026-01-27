#include<stdio.h>
int main()
{
    int i,n;
    printf("enter num:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%4==0)
            continue;
        else
            printf("%d\n",i);
    }
    return 0;
}