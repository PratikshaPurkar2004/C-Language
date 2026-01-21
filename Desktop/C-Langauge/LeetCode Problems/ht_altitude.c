#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    int max=0,curr=0;
    printf("enter size of array:: ");
    scanf("%d",&n);

    int *a=(int *)malloc(sizeof(int)*n);
    printf("enter array elements::");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        curr=curr+a[i];
        if(curr>max)
            max=curr;
    }
    printf("%d",max);

    free(a);
    return 0;
}