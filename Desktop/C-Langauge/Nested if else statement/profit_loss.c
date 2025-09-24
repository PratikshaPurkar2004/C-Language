#include<stdio.h>
int main()
{
    float cost_price,selling_price;
    printf("Enter the cost price:");
    scanf("%f",&cost_price);
    printf("Enter the selling_price:");
    scanf("%f",&selling_price);
    if(selling_price>cost_price)
    {
        float profit=selling_price-cost_price;
        printf("profit=%f",profit);
    }
    else
    {
        float loss=cost_price-selling_price;
        printf("loss=%f",loss);
    }
    return 0;
}