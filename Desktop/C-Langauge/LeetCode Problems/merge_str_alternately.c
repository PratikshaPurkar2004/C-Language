#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1,n2,i,j;
    printf("enter asize of array::");
    scanf("%d",&n1);
    printf("enter asize of array::");
    scanf("%d",&n2);

    int *a=(int *)malloc(sizeof(int)*n1);
    int *b=(int *)malloc(sizeof(int)*n2);
    int *ans=(int *)malloc(sizeof(int)*(n1+n2));
    printf("enter array elements::");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);

    printf("enter array elements::");
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);

    i=0,j=0;
    while(i<n1 && j<n2)
    {
        ans=ans+a[i];
        ans=ans+b[j];
        i++;
        j++;
    }
    if(i<n1)
    {
        while(i<n1)
        {
            ans=ans+a[i];
            i++;
        }
    }
    else
    {
        while(j<n2)
        {
            ans=ans+b[j];
            j++;
        }
    }
    for(i=0;i<(n1+n2);i++)
        printf("%d",ans[i]);

    free(a);
    free(b);
    free(ans);
    return 0;
}