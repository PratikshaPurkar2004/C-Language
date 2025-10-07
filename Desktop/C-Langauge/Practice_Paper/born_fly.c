#include<stdio.h>
int main()
{
    int has_horn,can_fly;
    printf("enter has_horn(1 or 0):");
    scanf("%d",&has_horn);
    printf("enter can_fly(1 or 0):");
    scanf("%d",&can_fly);
    if(has_horn==1&&can_fly==0)
        printf("unicorn");
    else if(has_horn==0 && can_fly==1)
        printf("pegasus");
    else if(has_horn==1&&can_fly==1)
        printf("alicorn");
    else
        printf("horse");
    return 0;
}