#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the input character:");
    scanf("%c",&ch);
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
        printf("%c is an alphabet",ch);
    else if(ch>='0'&&ch<='9')
        printf("%c is an digit",ch);
    else
        printf("%c is an special character",ch);
    return 0;
}