#include<stdio.h>
int main()
{
    int n,j,num=1;
    printf("enter a n:");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        for(j=1;j<=n;j++)
        {
            if((i+j)%2==0)
                printf("%d ",num++);
            else
                printf("- ");
        }
        printf("\n");
        i++;
    }
    return 0;
}