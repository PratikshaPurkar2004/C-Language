#include<stdio.h>
int main()
{
    int n1,n2;
    char op;
    printf("enter the two num:");
    scanf("%d%d",&n1,&n2);
    printf("enter the operator(+,-,*,/):");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
            printf("addition is=%d",n1+n2);
            break;
        case '-':
            printf("subtraction is=%d",n1-n2);
            break;
        case '*':
            printf("multiplication is=%d",n1*n2);
            break;
        case '/':
            if(n2!=0)
                printf("division is=%f",n1/n2);
            else
                printf("zero");
            break;
        default:
            printf("invalid choice");
    }
    return 0;
}