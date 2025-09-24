#include<stdio.h>
int main()
{
    int phy,chem,math,bio,evs;
    float percentage;
    printf("enter the marks of 5 subject:");
    scanf("%d%d%d%d%d",&phy,&chem,&math,&bio,&evs);
    int total=phy+chem+math+bio+evs;
    printf("total=%d\n",total);
    percentage=total/5;
    printf("percentage=%.2f\n",percentage);
    if(90<percentage)
        printf("A");
    else if(80<percentage)
        printf("B");
    else if(70<percentage)
        printf("C");
    else if(60<percentage)
        printf("D");
    else if(50<percentage)
        printf("E");
    else if(40<percentage)
        printf("F");
    else
        printf("fail");
    return 0;
}