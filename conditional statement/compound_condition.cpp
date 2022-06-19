#include <iostream>
using namespace std;

int main()
{
    int hour;
    cout<<"Enter hour in 24:";
    cin>>hour;

    if (hour>=9 && 18<<hour)
    {
        cout<<"working hours";
    }
    else
    {
        cout<<"rest hours";
    }

    return 0;
}