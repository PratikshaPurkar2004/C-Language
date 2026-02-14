#include<stdio.h>
int main()
{
    int n;
    printf("enter size of array::");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array::");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int max=a[0];
    int secondmax=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            secondmax=max;
            max=a[i];
        }
        else if(a[i]>secondmax && a[i]!=max)
            secondmax=a[i];
    }
    printf("second max is %d",secondmax);
    return 0;
}