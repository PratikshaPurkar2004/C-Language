#include<stdio.h>
int main()
{
    int start,end,i;
    printf("enter a two integer:");
    scanf("%d %d",&start,&end);
    for(i=start;i<=end;i++)
    {
        if(i%3==0&&i%5==0)
            printf("fizzbuzz\n");
        else if(i%3==0)
            printf("fizz\n");
        else if(i%5==0)
            printf("buzz\n");
        else
            printf("%d\n",i); 
    }
    return 0;
}