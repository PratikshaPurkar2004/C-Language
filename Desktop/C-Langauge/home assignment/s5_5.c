#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("enter array size:");
    scanf("%d",&n);

    int *a=(int *)malloc(sizeof(int)*n);
    if(a==NULL)
    {
        printf("not allocate memory");
        exit(-1);
    }

    printf("enter  array elements::");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("reverse array:");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    free(a);
    return 0;
}