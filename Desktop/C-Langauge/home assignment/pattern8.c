#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter a num::");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i+j)%2==0)
            
                printf("1\t");
            else
                printf("0\t");
        }
        printf("\n");
    }
    return 0;
}