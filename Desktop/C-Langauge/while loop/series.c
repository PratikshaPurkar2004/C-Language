#include<stdio.h>
int main()
{
    int n;
    int i=1;
    double sum;
    printf("enter the num:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum+=1.0/ i;
        i++;
    }
    printf("sum=%f\n",sum);
    return 0;
}