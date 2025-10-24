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

    int even=0,odd=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("even count=%d\n odd count=%d",even,odd);
    free(a);
    return 0;
}