#include<stdio.h>
int main()
{
    int fact=1,n,i=1;
    printf("enter number:");
    scanf("%d",&n);
    while(i<n)
    {
        fact=fact*i;
        i++;
    }
    printf("fact is %d\n",fact);
    return 0;
}