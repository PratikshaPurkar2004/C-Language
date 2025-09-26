#include<stdio.h>
int main()
{
    int i=1,n;
    int sum=0;
    printf("enter number:");
    scanf("%d",&n);
    while(i<=n)
    {
       sum+=i*i;
       printf("%d\n",sum);
       i++; 
    }
    return 0;
}