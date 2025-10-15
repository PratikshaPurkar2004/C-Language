#include<stdio.h>
int main()
{
    int i,n;
    printf("enter num:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        int j=1;
        while(j<=10)
        {
            if((i*j)%5==0)
                printf("[%d] ",i*j);
            else
                printf("%d ",i*j);
            j++;
        }
        printf("\n");
    }
    return 0;
}