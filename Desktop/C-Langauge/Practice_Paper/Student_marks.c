#include<stdio.h>
int main()
{
    int marks,i,n;
    printf("enter the students:");
    scanf("%d",&n);
    printf("enter the marks:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&marks);
        if(marks>=90)
            printf("Grade A\n");
        else if(marks>=75)
            printf("Grade B\n");
        else if(marks>=60)
            printf("Grade C\n");
        else if(marks>=40)
            printf("Grade D\n");
        else
            printf("fail\n");
    }
    return 0;
}