#include<iostream>
#include "Date.h"
using namespace std;


void Date::input()
{
    cout<<"Enter day month and year:: ";
    cin>>day >>month >>year;
}

void Date::check()
{
    int temp=year;
    int rev=0;
    while(temp>0)
    {
        rev=rev*10+temp%10;
        temp/=10;
    }
    int dm=day*100+month;
    if (rev==dm)
        cout<<"Symmetric Date";
    else
         cout<<"Not Symmetric";
}
