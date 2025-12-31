#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter num:");
    scanf("%d",&n);
    for(i=n;i>-1;i--)
    {
        if(n==-1)
            break;
        sum=sum+i;
        if(i%13==0)
            sum=0;
        
    }
    return 0;
}