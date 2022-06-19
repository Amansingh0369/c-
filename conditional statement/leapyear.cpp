#include <iostream>
using namespace std;

int main()
{
    int year,leapyear;
    cout<<"enter your year:";
    cin>>year;
    if (year%4==0)
    {
       cout<<"leap year";
    }
    
    else
    cout<<"not a leap year";

    return 0;


}