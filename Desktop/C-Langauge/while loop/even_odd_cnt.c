#include<stdio.h>
int main()
{
    int n;
    int Ecnt=0,Ocnt=0;
    printf("enter a num::");
    scanf("%d",&n);
    int i=1;
    while(n>=i)
    {
        if(i%2==0)
            Ecnt++;
        else
            Ocnt++;
        i++;
    }
    printf("Even count=%d\nOdd count=%d",Ecnt,Ocnt);
    return 0;
}