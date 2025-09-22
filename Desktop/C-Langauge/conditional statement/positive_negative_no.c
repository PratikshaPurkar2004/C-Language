#include <stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n>0)
        printf("Number is Positive");
    else if(n<0)
        printf("Number is Negative");
    else
        printf("Number is Zero");
    return 0;
}