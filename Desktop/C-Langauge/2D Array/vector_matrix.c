#include<stdio.h>
int main()
{
    int n,r,c;
    printf("enter size of matrix::");
    scanf("%d",&n);

    

    int v[n];
    int ans[n];
    printf("enetr vector matrix::\n");
    for(c=0;c<n;c++)
        scanf("%d",&v[c]);

    int m[n][n];
    printf("enter matrix elements:\n");
    for(r=0;r<n;r++)
        for(c=0;c<n;c++)
            scanf("%d",&m[r][c]);

    for(c=0;c<n;c++)
        ans[c]=0;


    for(c=0;c<n;c++)
    {
        for(r=0;r<n;r++)
        {
            ans[c]+=v[r]*m[r][c];
        }
    }

    printf("vector matrix multiplication is:\n");
    for(c=0;c<n;c++)
        printf("%d ",ans[c]);

    return 0;
}
