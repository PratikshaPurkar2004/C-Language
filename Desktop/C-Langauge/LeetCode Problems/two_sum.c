#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    int target;
    printf("enter size of array::");
    scanf("%d",&n);
    printf("enter target::");
    scanf("%d",&target);

    int *a = (int *)malloc(sizeof (int)*n);
    printf("enter a array elements:: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);


    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==target)
            {
                printf("%d %d",a[i],a[j]);
            }

        }
        
    }
    free(a);
    return 0;
}