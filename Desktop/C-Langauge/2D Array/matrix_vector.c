#include<stdio.h>
int main()
{
     int n,r,c;
     printf("enter size of matrix::");
     scanf("%d",&n);

     int m[n][n];
     int v[n];
     int ans[n];

     printf("enter matrix element::\n");
     for(r=0;r<n;r++)
        for(c=0;c<n;c++)
            scanf("%d",&m[r][c]);

    printf("enter row matrix::\n");
    for(r=0;r<n;r++)
        scanf("%d",&v[r]);

    for(r=0;r<n;r++)
        ans[r]=0;

    for(r=0;r<n;r++)
        for(c=0;c<n;c++)
            ans[r]+=m[r][c]*v[c];

    printf("matrix vector multiplication is:\n");
    for(r=0;r<n;r++)
        printf("%d ",ans[r]);
    printf("\n");
    
    
    return 0;
}