#include<stdio.h>
int main()
{
    int n,r,c;
    printf("enter size of matrix::");
    scanf("%d",&n);

    int m1[n][n];
    printf("enter first matrix::");
    for(r=0;r<n;r++)
        for(c=0;c<n;c++)
            scanf("%d",&m1[r][c]);

    int m2[n][n];
    printf("enter second matrix:: ");
    for(r=0;r<n;r++)
        for(c=0;c<n;c++)
            scanf("%d",&m2[r][c]);

    printf("first matrix is::");
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
            printf("%d ",m1[r][c]);
        printf("\n");
    }

    printf("second matrix is::");
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
            printf("%d ",m2[r][c]);
        printf("\n");
    }

    int sum[r][c];
    printf("sum matrix is::");
    for(r=0;r<n;r++)
        for(c=0;c<n;c++)
            sum[r][c]=m1[r][c]+m2[r][c];

    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
            printf("%d ",sum[r][c]);
        printf("\n");
    }
    return 0;

}