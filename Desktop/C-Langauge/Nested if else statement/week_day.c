#include<stdio.h>
int main()
{
    int week_no;
    printf("enter the week_no 1-7:");
    scanf("%d",&week_no);
    if(1==week_no)
         printf("its sunday");
    else if(2==week_no)
       printf("its monday");
    else if(3==week_no)
        printf("its tuesday");
    else if(4==week_no)
        printf("its wedensday");
    else if(5==week_no)
        printf("its thurday");
    else if(6==week_no)
        printf("its friday");
    else if(7==week_no)
        printf("its saturday");
    else 
        printf("invalid day");
    return 0;
}