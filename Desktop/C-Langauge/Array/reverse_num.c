/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("enter element:");
    scanf("%d",&n);
    int *a=(int *)malloc(sizeof(int)*n);
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);
    return 0;
}*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter num:");
    scanf("%d",&n);
    int *a=(int *)malloc(sizeof(int)*n);
    printf("enter array:");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int i=0;
    int j=n-1;
    while(i<j)
    //for(int i=0;i<n/2;i++)
    {
        int temp=a[i];
        a[i]=a[j];//a[n-i-1];
        a[j]=temp;
        i++;
        j--;
    }
    //for(int i=0;i<n;i++)
    i=0;
    while(i<n)
    {
        printf("%d ",a[i]);
        i++;
    }
    free(a);
    return 0;
}