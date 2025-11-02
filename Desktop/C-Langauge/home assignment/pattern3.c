#include<stdio.h>
int main()
{
    int n,s=8,i=1;
    printf("Enter an integer::");
    scanf("%d",&n);
    int tn=1;

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
        s-=2;
        tn++;
        i++;
    }
    return 0;
}