#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter num:");
    scanf("%d",&n);
    i=n;
    while(i>0)
    {
        j=1;
        while(j<=i)
        {
            printf("%d ",j);
            j++;
        }
        printf("\n");
        i--;
    }
    return 0;
}