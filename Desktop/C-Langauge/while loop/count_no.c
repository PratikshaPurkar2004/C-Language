#include<stdio.h>
int main()
{
    int n;
    int count=0;
    printf("enter num:");
    scanf("%d",&n);
    while(n>0)
    {
        //int rem=n%10;
        count++;
        n=n/10;
    }
    printf("number of digit=%d",count);
    return 0;
}