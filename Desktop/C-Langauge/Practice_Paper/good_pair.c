#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    printf("enter array:");
    scanf("%d",&n);

    int *A=(int *)malloc(sizeof(int)*n);
    if(A==NULL)
    {
        printf("memory allocation failed");
        exit(-1);
    }

    printf("enter array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
     
    int cnt=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]==A[j])
            {
                printf("(%d,%d)",i,j);
                cnt++;
            }
        }
    }
    printf("\nthere are %d good pair:",cnt);

    free(A);
    return 0;

}