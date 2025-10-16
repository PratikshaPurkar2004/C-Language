#include<stdio.h>
int main()
{
    int n=3;
    int A[3][3];
    int i,j,r,c;
    //printf("enter the size of matrix:");
    //scanf("%d",&n);
    printf("enter row:");
    scanf("%d",&r);
    printf("enter column:");
    scanf("%d",&c);
    printf("enter matrix elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&A[i][j]);
    }
    printf("matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }
    return 0;
}