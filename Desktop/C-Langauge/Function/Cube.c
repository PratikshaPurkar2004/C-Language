#include<stdio.h>
int Cube(int n);
int main()
{
    int n;
    printf("enter num::");
    scanf("%d",&n);
    int cube=Cube(n);
    printf("%d",cube); 
    return 0;
}

int Cube(int n)
{
    int cube=n*n*n;
    return cube;
}