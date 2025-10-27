#include<stdio.h>
int main()
{
    int n,cnt=0,i;
    float sum=0,num;
    printf("enter a integer:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter num:: ");
        scanf("%f",&num);
        if(num>0)
        {
            sum=sum+num;
            cnt++;
        }
    }
    if(cnt>0)
        printf("average=%f ",sum/cnt);
    else
        printf("non positive num");
    return 0;
}