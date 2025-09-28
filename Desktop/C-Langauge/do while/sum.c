#include<stdio.h>
int main()
{
    int n1,n2;
    do
    {
        printf("enter two num:");
        scanf("%d%d",&n1,&n2);
        printf("sum is=%d\n",n1+n2);
    }
    while(n1!=0&&n2!=0);
    return 0;
}