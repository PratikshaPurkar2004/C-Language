#include<stdio.h>
int add(int a,int b );
int main()
{
 int a=10,b=20;
 int ans= add(10,20);  
 printf("sum=%d",ans); 
return 0;
}

int add(int a,int b)
{
    return (a+b);
}