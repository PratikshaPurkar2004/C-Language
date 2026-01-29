#include<stdio.h>
int main()
{
    int k=1;
    int n,i,j;
    printf("enter a num::");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d ",k++);
        printf("\n");
    }
    return 0;
}