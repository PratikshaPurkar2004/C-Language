#include<stdio.h>
int main()
{
    int temp,i;
    for(i=0;i<7;i++)
    {
        printf("enter 7 days temperature:");
        scanf("%d",&temp);
        if(temp>=35)
            printf("very hot\n");
        else if(temp>=25)
            printf("warm\n");
        else if(temp>=15)
            printf("cool\n");
        else
            printf("cold\n");
    }
    return 0;
}