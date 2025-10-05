/*#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a num:");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
            printf("%d-",i);
    }
    return 0;
}*/

//using while loop
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a num:");
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        printf("%d-",i);
        i--;
    }
    return 0;
}
