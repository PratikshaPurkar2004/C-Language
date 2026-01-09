#include<stdio.h>
int main()
{
    int n;
    int ans=0;
    printf("enter a num::");
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        ans=ans*10+(n%10);
        n=n/10;
    }
    if(ans==temp)
        printf("palindrome");
    else
        printf("not palindrome");
    return 0;
}