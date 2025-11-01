#include<stdio.h>
int main()
{
    int n,r,c;
    printf("enter an n:");
    scanf("%d",&n);
    int mat[n][n];
    
    printf("enter an matrix::");
    for(r=0;r<n;r++)
        for(c=0;c<n;c++)
            scanf("%d",&mat[r][c]);

    int mul=1;
    for(r=0;r<n;r++)
        mul*=mat[r][1];
    printf("multiplication is=%d\n",mul);

    return 0;
}