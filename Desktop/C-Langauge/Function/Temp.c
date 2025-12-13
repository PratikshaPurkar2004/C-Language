#include<stdio.h>
float Temp(float c);
int main()
{
    float c;
    printf("enter temperature in celcius:: ");
    scanf("%f",&c);
    float temp=Temp(c);
    printf("%f",temp);
    return 0;
}

float Temp(float c)
{
    return (c*9/5)+32;
}