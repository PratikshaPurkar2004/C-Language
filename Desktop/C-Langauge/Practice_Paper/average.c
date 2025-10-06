#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("enter a num:");
    scanf("%d",&n);
    int *A=(int *)malloc(sizeof(int)*n);
    if(A==NULL)
    {
        printf("error allocation...\n");
        exit(-1);
    }
    printf("enter an array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+A[i];
    }
    printf("sum=%d\n",sum);
    double avg=(sum/n);
    printf("average of the array elements=%f",avg);
    free(A);
    return 0;
}