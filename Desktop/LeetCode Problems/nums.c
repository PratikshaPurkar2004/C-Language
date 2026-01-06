#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    printf("enter size of array::");
    scanf("%d",&n);
    int *a=(int *)malloc(sizeof(int)*n);
    printf("enter array elements::");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);;

    int cnt=1;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j]==1)
                    cnt++;
                else
                {
                    i=j;
                    break;
                }
            }
        }
    }
    printf("max=%d",cnt);
    return 0;
}