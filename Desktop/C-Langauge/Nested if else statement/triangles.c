#include<stdio.h>
int main()
{
    int a1,a2,a3,sum;
    printf("angle of triangle is:");
    scanf("%d%d%d",&a1,&a2,&a3);
    sum=a1+a2+a3;
    if(a1>0&&a2>0&&a3>0&&sum==180)
        printf("Triangle is a valid\n");
    else 
        printf("Triangle is not valid\n");
    return 0;
}
