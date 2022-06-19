#include <iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter 3 no:";
    cin>>a>>b>>c;

    if (a>b && a>c)
    {
        cout<<a<<" A is max";
    }
    else
    {
        if (b>c)
        {
            cout<<b<<" B is max";
        }
        else
        {
            cout<<c<<" C is max";
        }
    }

    return 0;

}