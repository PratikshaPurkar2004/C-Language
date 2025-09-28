/*#include<stdio.h>
int main()
{
    int num;
    int rem,ans;
    do{
        printf("enter num:");
        scanf("%d",&num);
        rem=num%10;
        ans=ans*10+rem;
        num=num/10;
    }while(ans!=0);
    return 0;
}*/

#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("enter number:");
    scanf("%d",&n);
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    printf("sum is=%d\n",sum);
    return 0;
}

