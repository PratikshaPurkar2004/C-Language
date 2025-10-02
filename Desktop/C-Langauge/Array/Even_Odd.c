#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    int count_even=0,count_odd=0;
    printf("enter num:");
    scanf("%d",&n);
    int *a=(int *)malloc(sizeof(int)*n);
    printf("enter array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            count_even++;
        else
            count_odd++;
    }
    printf("count even no=%d",count_even);
    printf("count even no=%d",count_odd);

    free(a);
    return 0;
}