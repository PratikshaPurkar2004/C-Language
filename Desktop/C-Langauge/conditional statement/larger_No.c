#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the two number:");
    scanf("%d%d",&n1,&n2);
    if(n1==n2)
        printf("Number is equal");
    else if(n1>n2)
        printf("n1 is larger");
    else
        printf("n2 is larger");
    return 0;
}