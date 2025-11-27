#include<stdio.h>
int odd(int n);


int main()
{
   int n,cnt=0;
   printf("enter num::");
   scanf("%d",&n);
   cnt=odd(n);
   printf("\nOdd=%d ",cnt);
    return 0;
}

int odd(int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
            cnt++;
        }
    }
    return cnt;
}