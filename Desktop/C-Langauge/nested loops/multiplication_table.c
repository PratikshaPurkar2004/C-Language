#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter num:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        for(j=1;j<12;j++)
        {
            printf("%d*%d=%d\n",i,j,i*j);
        }
    }
    return 0;
}