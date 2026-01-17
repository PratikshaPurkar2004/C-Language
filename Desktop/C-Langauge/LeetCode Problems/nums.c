#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("enter size of array::");
    scanf("%d",&n);
    int *a=(int *)malloc(sizeof(int)*n);
    printf("enter array elements::");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);;

    int cnt=0;
    int max_cnt=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            cnt++;
            if(cnt>max_cnt)
                max_cnt=cnt;
        }
        else
            cnt=0;
    }
    printf("max=%d",max_cnt);
    free(a);
    return 0;
}