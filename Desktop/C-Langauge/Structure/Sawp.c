#include<stdio.h>
struct Swap
{
    int n1;
    int n2;
};

int main()
{
    struct Swap s;
    printf("enter two num(n1 and n2)::");
    scanf("%d %d",&s.n1,&s.n2);
    printf("Before swapping::n1=%d\tn2=%d\n",s.n1,s.n2);
    int temp=s.n1;
    s.n1=s.n2;
    s.n2=temp;
    printf("After Swapping::n1=%d\tn2=%d\n",s.n1,s.n2);
    return 0;
}
