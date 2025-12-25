#include<stdio.h>
struct student
{
    int RollNo;
    float marks;
};

int main()
{
    struct student s;
    printf("enter student Roll No::");
    scanf("%d",&s.RollNo);
    printf("enter student marks::");
    scanf("%f",&s.marks);
    printf("Roll No=%d\n",s.RollNo);
    printf("Marks=%f",s.marks);
    return 0;
}