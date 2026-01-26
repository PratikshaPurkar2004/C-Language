#include<stdio.h>
int main()
{
    float temp,ans;
    char unit;
    printf("enter a temperature::");
    scanf("%f",&temp);
    printf("enter a unit(C/F)::");
    scanf("%s",&unit);
    if(unit=='c'||unit=='C')
    {
        ans=(temp * 9 / 5) + 32;
        printf("Temperature in Fahrenheit::%f",ans);
    }
    else if(unit=='f'||unit=='F')
    {
        ans=(temp - 32) * 5 / 9;
        printf("Temperature in Celsius::%f",ans);
    }
    else
        printf("Invalid Unit!");
    return 0;
}