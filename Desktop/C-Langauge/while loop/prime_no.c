#include<stdio.h>
int main()
{
    int i=2,n;
    int flag=0;
    printf("enter num:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(n%i==2)
        {
            flag=1;
            break;
        }
        
    }
    if(flag==1)
        printf("num is not prime");
    else
        printf("num is prime");
    return 0;
}