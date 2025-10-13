#include<stdio.h>
int main()
{
    int n,i=1,f1,f2,f3;
    int sum=0;
    printf("enter a n num:");
    scanf("%d",&n);
    f1=1;
    f2=1;
    while(f1<n)
    {
        if(f1%5==0)
            sum+=f1;
        printf("%d ",f1);
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
    printf("sum is %d\n",sum);
    return 0;
}