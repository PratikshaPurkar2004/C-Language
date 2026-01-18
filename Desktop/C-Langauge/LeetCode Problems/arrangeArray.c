#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    printf("enter size of array::");
    scanf("%d",&n);

    int *a=(int *)malloc(sizeof(int)*n);
    int *ans=(int *)malloc(sizeof(int)*n);
    printf("enter array elements::");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    int ans_i=0;
    for(i=0;i<n;i++)
    {
        ans[ans_i]=a[i];
        ans[ans_i+1]=a[i+n];
        ans_i+=2;
    }
    for(i=0;i<n;i++)
        printf("%d",ans[i]);
    
    free(a);
    free(ans); 
    return 0;
}