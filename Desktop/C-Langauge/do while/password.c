#include<stdio.h>
int main()
{
    char password;
    do{
        printf("enter password:\n");
        scanf("%c",&password);
    }
    while(password!='a');
    return 0;
}