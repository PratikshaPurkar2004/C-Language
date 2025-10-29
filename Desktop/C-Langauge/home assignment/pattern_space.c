#include<stdio.h>
int main()
{
    int n,s=0,i=1,tn;
    printf("enter an integer:");
    scanf("%d",&n);
    tn=n;
    while(i<=n)
    {
        int ts=0;
        while(ts<s)
        {
            printf(" ");
            ts++;
        }
        int j=1;
        while(j<=tn)
        {
            printf("%d ",j);
            j++;
        }
        printf("\n");
        s+=2;
        tn--;
        i++;
    }
    return 0;
}