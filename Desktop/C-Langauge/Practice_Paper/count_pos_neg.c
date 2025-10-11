#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    printf("enter a size of array:");
    scanf("%d",&n);

    int *A=(int *)malloc(sizeof(int)*n);
    if(A==NULL)
    {
        printf("memory not allocated....\n");
        exit(-1);
    }

    printf("enter array element:");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    
    int pos=0,neg=0,zero=0;
    for(i=0;i<n;i++)
    {
        if(A[i]>0)
            //printf("%d",pos++);
            pos++;
        else if(A[i]<0)
            //printf("%d",neg++);
            neg++;
        else
           // printf("%d",zero++);
            zero++;
    }
    printf("positive count=%d,negative count=%d,zero count=%d",pos,neg,zero);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]+A[j]>0)
                printf("(%d,%d)",A[i],A[j]);
        }
    }
    free(A);
    return 0;

}