#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter two integer:");
    scanf("%d %d",&n1,&n2);
    (n1>n2)?printf("n1 is larger"):printf("n2 is lager");
    return 0;
}