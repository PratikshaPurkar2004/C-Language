#include<stdio.h>
int Table(int n);
int main()
{
    int n;
    printf("enetr a num::");
    scanf("%d",&n);
    Table(n);
    
    return 0;
}

int Table(int n)
{
    for(int i=1;i<=10;i++)
        printf("%d*%d=%d\n",n,i,n*i);   
}