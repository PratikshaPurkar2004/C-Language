#include<stdio.h>
int main()
{
    int n;
    printf("eneter an integer:");
    scanf("%d",&n);
    float sum=0.0;
    int i=0;
    while(i<n)
    {
        sum+=i;
        i++;
    }
    printf("sum=%f",sum);
    return 0;
}