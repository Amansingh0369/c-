#include <iostream>
using namespace std;

int main()
{
    float m1,m2,m3,total;
    cout<<"Enter your 3 test marks out of 10:";
    cin>>m1>>m2>>m3;
    total=(m1+m2+m3)/3;

    if(total>6)
    cout<<"grade A"<<endl;

    else if(total<6 && total>3.5 )
    {
        cout<<"grade B"<<endl;
    }
    else
    cout<<"Grade c"<<endl;

    return 0;

}