#include<stdio.h>
int main()
{
    int n,r,c;
    printf("enter size of matrix::");
    scanf("%d",&n);

    int m1[n][n];
    printf("enter first matrix::\n");
    for(r=0;r<n;r++)
        for(c=0;c<n;c++)
            scanf("%d",&m1[r][c]);

    int m2[n][n];
    printf("enter second matrix::\n");
    for(r=0;r<n;r++)
        for(c=0;c<n;c++)
            scanf("%d",&m2[r][c]);

    printf("first matrix is::\n");
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
            printf("%d ",m1[r][c]);
        printf("\n");
    }

    printf("second matrix is::\n");
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
            printf("%d ",m2[r][c]);
        printf("\n");
    }

    int sub[r][c];
    printf("subtraction matrix is::\n");
    for(r=0;r<n;r++)
        for(c=0;c<n;c++)
            sub[r][c]=m1[r][c]-m2[r][c];

    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
            printf("%d ",sub[r][c]);
        printf("\n");
    }
    return 0;

}