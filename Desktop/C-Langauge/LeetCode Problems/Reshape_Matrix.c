#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m,n,i,j;
    printf("enter rows::");
    scanf("%d",&m);
    printf("enter column::");
    scanf("%d",&n);

    int mat[100][100];

    printf("enter array elements::");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&mat[i][j]);
    }

    printf("array elements are::");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }

    int r,c;
    printf("enter new rows and column::");
    scanf("%d%d",&r,&c);

    printf("\nReshaped Matrix:\n");

    int k = 0;  

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", mat[k / n][k % n]);
            k++;
        }
        printf("\n");
    }
    
}