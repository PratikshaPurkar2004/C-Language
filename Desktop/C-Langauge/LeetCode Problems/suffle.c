#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    int flag=0;
    printf("enter the size of array::");
    scanf("%d",&n);

    int *a=(int *)malloc(sizeof(int)*n);
    int *ans=(int *)malloc(sizeof(int)*n);
    printf("enter array elements::");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
          ans[0]=a[i];
          flag=1;
          break;  
        }
    }
    if (flag == 1)
        printf("First consecutive duplicate: %d\n",ans[0]);
    else
        printf("No consecutive duplicate found\n");
    
    free(a);
    free(ans);
    return 0;
}