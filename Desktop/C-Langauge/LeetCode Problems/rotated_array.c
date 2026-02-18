#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    printf("enter number of elements::");
    scanf("%d",&n);

    int  *a=(int*)malloc(sizeof(int)*n);

    printf("enter a elements::");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    
    int last=a[n-1];
    for(i=n-1;i>0;i--)
        a[i]=a[i-1];

    a[0]=last;

    printf("\nafter rotation::");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);


    free(a);
    return 0;
}