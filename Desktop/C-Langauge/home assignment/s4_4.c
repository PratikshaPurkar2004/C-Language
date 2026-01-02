#include<stdio.h>
int main()
{
    int i,n;
    double sum=0;
    printf("enter an integer::");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        sum+=(1/i);
    printf("%f",sum);
    
    return 0;
}