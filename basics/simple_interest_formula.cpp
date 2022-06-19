#include <iostream>

int main()
{
    using namespace std;
    float simple_int,p,r,t;
    
    cout<<"Enter Principal:";
    cin>>p;
    cout<<"Enter Rate:";
    cin>>r;
    cout<<"Enter Time:";
    cin>>t;
    simple_int=(p*r*t)/100;
    
    cout<<"Simple_Interest:"<<simple_int<<endl;
    
}
