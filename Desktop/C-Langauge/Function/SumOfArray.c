#include<stdio.h>
int sum(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
        sum=sum+a[i];
    return sum;
}
int main()
{
    int a[5];
    printf("enter array elements::");
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("sum=%d",sum(a,5));
    return 0;
}