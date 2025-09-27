#include<stdio.h>
int main()
{
    char grade;
    printf("enter the grade:");
    scanf("%c",&grade);
    switch(grade)
    {
        case 'A':
            printf("first class");
            break;
        case 'B':
            printf("second class");
            break;
        case 'C':
            printf("third class");
            break;
        case 'D':
            printf("fourth class");
            break;
        case 'F':
            printf("fail");
        default:
            printf("invalid grade");
    }
    return 0;
}