#include<stdio.h>
int main()
{
    int n=3;
    int A[n][n];
    int r,i,j,c;
    printf("enter row:");
    scanf("%d",&r);
    printf("enter column:");
    scanf("%d",&c);
    printf("enter matrix elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d ",&A[i][j]);
        printf("\n");
    }
    printf("matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }
    for(j=0;j<c;j++)
    {
        printf("%d ",A[0][j]);
    }
    return 0;
}