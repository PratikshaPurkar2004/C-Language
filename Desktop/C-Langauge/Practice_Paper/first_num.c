#include<stdio.h>
int main()
{
    int n,m,i;
    printf("enter a n and m:");
    scanf("%d%d",&n,&m);
    for(i=n+1;;i++)
    {
        if(i%m==0)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}