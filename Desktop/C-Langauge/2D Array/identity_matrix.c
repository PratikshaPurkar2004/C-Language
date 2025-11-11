#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("enetr row:");
    scanf("%d",&r);
    printf("enetr column:");
    scanf("%d",&c);
    printf("enter matrix elemnts:");
        int A[r][c];

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&A[i][j]);
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
                A[i][j]=1;
            else
                A[i][j]=0;
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }
    return 0;
}