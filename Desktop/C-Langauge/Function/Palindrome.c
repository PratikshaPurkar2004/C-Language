#include<stdio.h>
int main()
{
    int n,r;
    printf("enter num::");
    scanf("%d",&n);
    r=Palindrome(n);
    if(n==r)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

int Palindrome(int n)
{
    int r=0;
    while(n>0)
    {
        int rev=n%10;
        r=r*10+rev;
        n=n/10;
    }
    return r;

}