/*#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter num:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i%2==0)
                printf("*");
            else
                printf("#");
        }
        printf("\n");
    }
    return 0;
}*/

#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter the n:");
    scanf("%d",&n);
    while(i<n)
    {
        int j=1;
        while(j<n)
        {
            if(i%2==0)
                printf("*");
            else
                printf("#");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}