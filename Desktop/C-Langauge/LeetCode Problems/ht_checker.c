#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    printf("enter size of array::");
    scanf("%d",&n);

    int *ht=(int *)malloc(sizeof(int)*n);
    int *ex=(int *)malloc(sizeof(int)*n);

    printf("enter array elements::");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ht[i]);
        ex[i]=ht[i];
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(ex[j] > ex[j + 1])
            {
                int temp = ex[j];
                ex[j] = ex[j + 1];
                ex[j + 1] = temp;
            }
        }
    }

    for(i=0;i<n;i++)
        printf("%d\t",ex[i]);
    


    int cnt=0;
    for(i=0;i<n;i++)
    {
        if(ht[i]!=ex[i])
            cnt++;
    }
    printf("\n%d",cnt);
    free(ht);
    free(ex);
    return 0;
}
