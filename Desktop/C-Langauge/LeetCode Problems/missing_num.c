#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j;
    printf("enter a num::");
    scanf("%d",&n);

    int a[n],b[n];

    printf("enter array elements::");
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                int temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }

    printf("sorted array are::");
    for(i=0;i<n;i++)
        printf("%d ",b[i]);

    int missing=-1;
    for(i=0;i<n;i++)
    {
        if(b[i]!=i+1)
        {
            missing=i+1;
            break;
        }
    }
    if(missing != -1)
        printf("\nMissing number is: %d\n", missing);
    else
        printf("\nNo missing number found\n");
    return 0;

}