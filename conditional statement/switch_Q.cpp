#include <iostream>
using namespace std;

int main()
{

    cout<<"Menu"<<endl;
    cout<<"1.Add\n"<<"2.sub\n"<<"3.divide\n"<<"4.multiply"<<endl;
    int option;
    cout<<"choice ur option no:";
    cin>>option;
    int a,b,c;
    cout<<"Enter a,b:";
    cin>>a>>b;


    switch (option)
    {
    case 1:c=a+b;
        break;

    case 2:c=a-b;
        break;

    case 3:c=a/b;
        break;

    case 4:c=a*b;

    default:
        break;
    }

    cout<<c<<endl;

    return 0;


} 
