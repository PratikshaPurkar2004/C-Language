#include<stdio.h>
int main()
{
    int l1,l2,l3;
    printf("enter the length of triangles:");
    scanf("%d%d%d",&l1,&l2,&l3);
    if(l1+l2>l3&&l1+l3>l2&&l2+l3>l1)
    {
        printf("it is a valid triangle\n");
        if(l1==l2==l3)
            printf("it is a equilateral\n");
        else if(l1==l2||l1==l3||l2==l3)
             printf("it is a isosceles\n");
        else
             printf("it is a scelene\n");
    }
    else    
        printf("triangle is not valid\n");
    return 0;
}