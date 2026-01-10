#include<stdio.h>
int main()
{
    int n,i;
    printf("enter num::");
    scanf("%d",&n);
    i=n;
    while(i>0)
    {
        printf("%d\t",i);
        i--;
    }
    return 0;
}