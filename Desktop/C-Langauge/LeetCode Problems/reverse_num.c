#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    int MAX=INT_MAX/10,MIN=INT_MIN/10;
    int ans=0;
    printf("enter a num::");
    scanf("%d",&n);
    while(n!=0)
    {
        if(MAX<ans||MIN>ans)
            return 0;
        int temp=n%10;
        ans=ans*10+temp;
        n=n/10;
    }
    printf("%d",ans);
}