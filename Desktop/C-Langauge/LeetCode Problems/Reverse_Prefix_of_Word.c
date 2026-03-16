#include<stdio.h>
#include<string.h>

int main()
{
    char word[100];
    char ch;
    int pos = -1;

    printf("Enter word: ");
    scanf("%s", word);

    printf("Enter character: ");
    scanf(" %c", &ch);

    int n = strlen(word);

    for(int i=0;i<n;i++)
    {
        if(word[i]==ch)
        {
            pos = i;
            break;
        }
    }

    if(pos!=-1)
    {
        for(int i=pos;i>=0;i--)
            printf("%c",word[i]);

        for(int i=pos+1;i<n;i++)
            printf("%c",word[i]);
    }
    else
        printf("%s",word);

    return 0;
}