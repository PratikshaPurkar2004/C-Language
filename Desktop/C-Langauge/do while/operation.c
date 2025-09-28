#include<stdio.h>
int main()
{
    int n1,n2;
    char op;
    do
    {
        printf("enter the operator(-,+,*,/):");
        scanf("%c",&op);
        printf("enter number:");
        scanf("%d%d",&n1,&n2);
        switch(op)
        {
            case '+':
                printf("addition is=%d\n",n1+n2);
                break;
            case '-':
                printf("subtraction is=%d\n",n1-n2);
                break;
            case '*':
                printf("multiplication is=%d\n",n1*n2);
                break;
            case '/':
                if(n2!=0)
                    printf("division is=%d\n",n1/n2);
                else
                    printf("division is zero");
                break;
            default:
                printf("invalid operation");
        }
    }while(op!=4);
    return 0;
}