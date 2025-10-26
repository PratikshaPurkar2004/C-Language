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

    float sum=0;
    for(i=0;i<n;i++)
        sum=sum+a[i];
    printf("sum=%f\n",sum);
    printf("average=%f\n",sum/n);
    return 0;

}