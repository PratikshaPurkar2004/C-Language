#include<stdio.h>
int main()
{
    int ans=0,n,rem;
    printf("enter number:");
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
        rem=n%10;
        ans=(ans*10)+rem;
        n=n/10;
    }
    //printf("%d",ans);
    if(temp==ans)
        printf("\npalidrome");
    else
        printf("\nnot palindrome");
    return 0;
}