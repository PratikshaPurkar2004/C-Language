#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    printf("enter the size of array::");
    scanf("%d",&n);
    int *a=(int *)malloc (sizeof(int)*n);

    printf("enter array elements::");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    int cnt=0;
    for(i=0;i<n;i++)
    {
        cnt=0;
        for(j=0;j<n;j++)
        {
            if(i!=j && a[j]<a[i])
                cnt++;
        }
        printf("count=%d\t",cnt);
    }
    free(a);
    return 0;
}