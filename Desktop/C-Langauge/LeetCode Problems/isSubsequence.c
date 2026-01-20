#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1,n2,i,j;
    printf("enter size of array::");
    scanf("%d",&n1);

    printf("enter size of array::");
    scanf("%d",&n2);


    int *a=(int *)malloc(sizeof(int)*n1);
    int *b=(int *)malloc(sizeof(int)*n2);
    printf("enter a array elments::");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);

    printf("enter a array elments::");
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);

    if(n2<n1)
        printf("0");

    int cnt=0;
    i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(a[i]==b[j])
        {
            i++;
            j++;
            cnt++;
        }
        else
            j++;
    }
    if(n1==cnt)
        printf("1");
    else 
        printf("0");

    free(a);
    free(b);
    return 0;
}