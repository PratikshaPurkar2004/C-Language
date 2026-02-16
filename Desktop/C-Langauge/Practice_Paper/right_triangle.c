#include<stdio.h>
int main()
{
    int n,i,j,num=1;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=1;j<i+1;j++)
        {
            printf("%d ",num++); 
        }
        printf("\n");
    }
    return 0;
}
