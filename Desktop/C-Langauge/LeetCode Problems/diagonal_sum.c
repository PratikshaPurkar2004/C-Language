#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    printf("enter size of matrix::");
    scanf("%d",&n);
    int m[n][n];
    printf("enter matrix elements::");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&m[i][j]);
    }

    printf("matrix is::\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",m[i][j]);
        printf("\n");
    }

    int sum=0;
    for(i=0;i<n;i++)
        sum=sum+m[i][i];
    printf("sum is::%d",sum);
    free(m);
    return 0;
}