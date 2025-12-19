#include <stdio.h>
struct Swap
{
    int x;
};

int main()
{
    struct Swap s[2];
    printf("enter a two num::");
    scanf("%d %d",&s[0].x,&s[1].x);
    int temp=s[0].x;
    s[0].x=s[1].x;
    s[1].x=temp;
    printf("After Swapping::%d\t%d",s[0].x,s[1].x);
    return 0;
}