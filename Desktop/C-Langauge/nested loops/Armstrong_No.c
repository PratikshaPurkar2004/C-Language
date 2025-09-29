/*#include<stdio.h>
int main()
{
    int num,rem;
    int sum=0;
    printf("enter num:");
    scanf("%d",num);
    while(num>0)
    {
        rem=num%10;
        sum+=rem*rem*rem;
        num=num/10;
    }
    if(sum==num)
        printf("armstrong number");
    else
        printf("not armstrong number");
    return 0;
}
    */

#include<stdio.h>
int main()
{
    int i,rem,sum=0,temp,num;
    printf("enter num:");
    scanf("%d",num);
    for(i=1;i<=999;i++)
    {
        temp=i;
        while(temp>0)
        {
            rem=temp%10;
            sum+=rem*rem*rem;
            temp=temp/10;
        }
        if(sum==i)
            printf("armstrong");
        else
            printf("not")

    }
}