#include<stdio.h>
int main()
{
    int r,c;
    printf("enter row::");
    scanf("%d",&r);
    printf("enter column::");
    scanf("%d",&c);

    int a[r][c];
    printf("enter matrix elements::");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }

    for(int i=0;i<(r-1);i++)
    {
        for(int j=0;j<(c-1);j++)
        {
            if(a[i][j]!=a[i+1][j+1])
                printf("not toeplitz");
        }
    }
    printf("toeplitz");
    return 0;
}