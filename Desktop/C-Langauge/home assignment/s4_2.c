#include<stdio.h>
int main()
{
    int n;
    printf("enter an num:");
    scanf("%d",&n);
    int i=0;
    while(i<n)
    {
        if(i%2==0)
            printf("%d ",i);
        i++;
    }
    return 0;
}