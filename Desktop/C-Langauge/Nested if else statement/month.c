/*#include<stdio.h>
int main()
{
    int month;
    int days;
    printf("enter the month(1-12):");
    scanf("%d",&month);
    printf("enter the days:");
    scanf("%d",&days);
    if(month==1&&days==31)
        printf("its january",days);
    else if(month==2&&days==29)
        printf("its february",days);
    else if(month==3&&days==31)
        printf("its march",days);
    else if(month==4&&days==30)
        printf("its april",days);
    else if(month==5&&days==31)
        printf("its march",days);
    else if(month==6&&days==30)
        printf("its june",days);
    else if(month==7&&days==31)
        printf("its july",days);
    else if(month==8&&days==31)
        printf("its august",days);
    else if(month==9&&days==30)
        printf("its september",days);
    else if(month==10&&days==31)
        printf("its octomber",days);
    else if(month==11&&days==30)
        printf("its november",days);
    else if(month==12&&days==31)
        printf("its december",days);
    else
        printf("invalid month");
    return 0;
}*/

#include<stdio.h>
int main()
{
    int month,year;
    printf("enter the month(1-12):");
    scanf("%d",&month);
    printf("enter the year:");
    scanf("%d",&year);
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
        printf("31 days");
    else if (month==4||month==6||month==9||month==11)
        printf("30 days");
    else if(month==2)
        if(year%400==0||year%100!=0&&year%4==0)
            printf("29 days leap year");
        else
            printf("28 days not a leap year");
    else
        printf("invalid month");
    return 0;    
}