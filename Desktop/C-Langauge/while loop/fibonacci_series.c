#include<stdio.h>
int main()
{
    int n,i=1;
    int f1=0,f2=1,f3;
    printf("enter num:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",f1);
        f3=f1+f2;
        f1=f2;
        f2=f3;
        i++;
    }
    //printf("fibonacci series=%d",f3); 
    return 0;
}