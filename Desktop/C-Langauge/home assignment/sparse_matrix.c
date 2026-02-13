#include<stdio.h>
int main()
{
    int n,m,cnt=0;
    printf("enter the number of rows and columns:");
    scanf("%d%d",&n,&m);
    int a[100][100];
    printf("enter matrix elements:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==0)
                cnt++;
        }
    }
    if(cnt>(m*n)/2)
        printf("sparse matrix");
    else
        printf("not sparse matrix");


}