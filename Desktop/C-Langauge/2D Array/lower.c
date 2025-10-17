#include<stdio.h>
int main()
{
    int n=3;
    int r,c,i,j;
    int A[n][n];
    printf("enter row:");
    scanf("%d",&r);
    printf("enter column:");
    scanf("%d",&c);
    printf("enter matrix elements:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&A[i][j]);
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i>j)
                printf("%d\t",A[i][j]);
            else
                printf("0\t");
        }
        printf("\n");
    }

    
 return 0;   
}