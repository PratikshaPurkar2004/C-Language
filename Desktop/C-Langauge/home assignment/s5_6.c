#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("enter array size:");
    scanf("%d",&n);

    int *a=(int *)malloc(sizeof(int)*n);
    int *b=(int *)malloc(sizeof(int)*n);
    if(a==NULL||b==NULL)
    {
        printf("not allocate memory");
        exit(-1);
    }

    printf("enter  array elements::");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
        b[i]=a[i];
    
    printf("copy array is:");
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
    free(a);
    return 0;
}