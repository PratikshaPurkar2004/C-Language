#include<stdio.h>
int main()
{
    int yr;
    printf("Enter the year:");
    scanf("%d",&yr);
    if(yr%400==00||yr%4==0&&yr%100!=0)
        printf("is a Leap year");
    else
        printf("is not Leap year");
    return 0;
}
