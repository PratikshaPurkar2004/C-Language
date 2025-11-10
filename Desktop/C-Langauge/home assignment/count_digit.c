#include<stdio.h>
int main()
{
    int n;
    int cnt=0;
    printf("enter the num::");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        n=n%10;
        cnt++;
        i++;
    }
    printf("digit=%d ",cnt);
    return 0;
}