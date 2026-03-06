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
    
    int cnt=0,j;
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("(%d,%d)",i,j);
                cnt++;
            }

        }
    }
    printf("%d good pair",cnt);
    free(a);
    return 0;
}