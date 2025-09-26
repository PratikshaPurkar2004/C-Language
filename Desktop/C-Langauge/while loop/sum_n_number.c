#include<stdio.h>
int main()
{
    int i=1,n;
    int sum=0;
    printf("enter number:");
    scanf("%d",&n);
    while(i<=n)
    {
       sum=sum+i;
       //printf("%d\n",sum); 
        ++i;
    }
    printf("%d\n",sum); 
    return 0;
}