#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter a num::");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
            printf("%d",i);
        printf("\n");
    }
    return 0;
}