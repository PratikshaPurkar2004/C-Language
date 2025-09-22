#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
        printf("%c is a uppercase",ch);
    else if(ch>='a'&&ch<='z')
        printf("%c is an lowercase",ch);
    else
        printf("%c is not a alphabet",ch);
    return 0;
}