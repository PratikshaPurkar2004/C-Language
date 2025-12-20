#include<stdio.h>
struct Point
{
    double x;
    double y;
};

int main()
{
   // double x,y;
    //printf("enter (x,y) coordinates:");
    //scanf("%lf %lf",&p1.x,&p1.y);

    struct Point p1;
    p1.x=1;
    p1.y=2;

    struct Point p2;
    p2.x=3;
    p2.y=4;

    struct Point p3;
    p3.x=p1.x+p2.x;
    p3.y=p1.y+p2.y;
    printf("sum of point =%.2lf %.2lf",p3.x,p3.y);

    return 0;
}
