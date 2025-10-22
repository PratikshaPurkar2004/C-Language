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
    int evencnt=0,oddcnt=0;
    for(i=0;i<n;i++)
    {
        if(A[i]%2==0)
        {
            A[i]=0;
            evencnt++;
        }
        else
        {
            A[i]=1;
            oddcnt++;
        }

    }
    printf("even count =%d\n odd count=%d\n",evencnt,oddcnt);
    for(i=0;i<n;i++)
    {
        if(i<evencnt)
            A[i]=0;
        else
            A[i]=1;
    }
    for(i=0;i<n;i++)
        printf("%d ",A[i]);

    free(A);
    return 0;
}