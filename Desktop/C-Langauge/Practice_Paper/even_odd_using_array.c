#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("enter array:");
    scanf("%d",&n);

    int *A=(int *)malloc(sizeof(int)*n);
    if(A==NULL)
    {
        printf("memory not allocate...\n");
        exit(-1);
    }

    printf("enter array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);

    for(i=0;i<n;i++)
    {
        if(A[i]%2==0)
            A[i]=0;
        else
            A[i]=1;
    }
    free(A);
    return 0;
}