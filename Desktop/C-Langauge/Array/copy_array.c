#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("enter an num:");
    scanf("%d",&n);

    int *a2=(int *)malloc(sizeof(int)*n);
    int *a1=(int *)malloc(sizeof(int)*n);
    if(a1==NULL)
    {
        printf("memory not allocate.....\n");
        exit(-1);
    }

    printf("enter array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a1[i]);

    printf("original array\n");
    for(i=0;i<n;i++)
        printf("%d ",a1[i]);
    
    for(i=0;i<n;i++)
        a2[i]=a1[i];

    printf("\ncopied array:\n");
    for(i=0;i<n;i++)
        printf("%d ",a2[i]);
    
    free(a1);
    return 0;
}