#include<stdio.h>
int main()
{
    int n=3;
    int i,j;
    int A[n][n];
    printf("size of matrix:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&A[i][j]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }


    for(i=0;i<n;i++)
        printf("%d\t",A[i][i]);
    printf("\n");

 return 0;   
}