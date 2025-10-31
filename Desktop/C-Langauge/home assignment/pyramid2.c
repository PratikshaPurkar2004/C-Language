#include<stdio.h>
int main()
{
    int n,s=0,i=1;
    printf("enter an integer::");
    scanf("%d",&n);
    int tn=n;
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
        tn--;
        s=s+1;
        i++;
    }
    return 0;
}
