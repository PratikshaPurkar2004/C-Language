#include<stdio.h>
int main()
{
    int num,check;
    printf("enter the num:");
    scanf("%d",&num);
    if(num<10)
        check=1;
    else if(num>10)
        check=2;
    else
        check=3;

    switch(check)
    {
        case 1:
            printf("small");
            break;
        case 2:
            printf("large");
            break;
        case 3:
            printf("equal");
            break;
        default:
            printf("invalid num");
   }
   return 0;
}