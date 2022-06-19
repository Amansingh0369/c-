#include <iostream>
using namespace std;

int main()
{
    int day;
    cout<<"Enter day in no:";
    cin>>day;

    if (day==1)
    {
        cout<<"monday";
    }
    else if(day == 2)
    {
        cout<<"tuesday";
    }
    else if(day == 3)
    {
        cout<<"wednesday";
    }
    else if(day == 4)
    {
        cout<<"thuresday";
    }
    else if(day == 5)
    {
        cout<<"friday";
    }
    else if(day == 6)
    {
        cout<<"saturday";
    }
    else if(day == 7)
    {
        cout<<"sunday";
    }
    else
    {
        cout<<"invalid ERROR";
    }

    return 0;
}