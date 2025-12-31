#include<stdio.h>
int main()
{
    int i,score;
    printf("enter the score:");
    for(i=1;i<=100;i++)
    {
        scanf("%d",&score);
        (score>=40)?printf("pass\n"):printf("fail\n");
        score>=90?printf("excellent\n"):printf("keep improving!\n");
    }
    
    return 0;
}