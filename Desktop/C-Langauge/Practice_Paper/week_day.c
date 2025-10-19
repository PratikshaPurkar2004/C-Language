#include<stdio.h>
int main()
{
    int i,n,day;
    printf("enter the n day:");
    scanf("%d",&n);
    printf("enter days(1-7):");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&day);
        switch(day)
        {
            case 1:
                printf("sunday ");
                break;
            case 2:
                printf("monday ");
                break;
            case 3:
                printf("tuesday ");
                break;
            case 4:
                printf("wednesday ");
                break;
            case 5:
                printf("thursday ");
                break;
            case 6:
                printf("friday ");
                break;
            case 7:
                printf("saturday ");
                break;
            default:printf("invalid day ");
        }
    }
    return 0;
}
