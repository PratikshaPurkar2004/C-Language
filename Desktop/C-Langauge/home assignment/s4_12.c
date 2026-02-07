#include<stdio.h>
int main()
{
    int n,i;
    printf("enter an num::");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%2==1)
            continue;
        printf("%d ",i);
    }
    //printf("%d ",i);
    return 0;
}