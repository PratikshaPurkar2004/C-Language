#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    int flag=1;
    printf("enter a num:");
    scanf("%d",&n);
    int *a=(int *)malloc(sizeof(int)*n);
    printf("enter array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    i=0;
    j=n-1;
    flag=1;
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            flag=0;
            break;
        }
        i++;
        j--;
    }
    if(flag==1)
        printf("palindrome ");
    else    
        printf("not palindrome");
    free(a);
    return 0;
}/*

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("enter num:");
    scanf("%d",&n);
    int *a=(int *)malloc(sizeof(int)*n);
    printf("enter array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    i=0;
    int j=n-1;
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            printf("not palindrome");
            exit(0);
        }
        i++;
        j--;   
    }
    printf("palindrome");   
    free(a);
    return 0;
}*/
