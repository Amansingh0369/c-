#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c,d,r1,r2;
    cout<<"Enter a,b,c:";
    cin>>a>>b>>c;
    d=b*b-4*a*c;

    if (d==0)
    {
        cout<<"roots are real and equal:"<<endl;
        cout<<(-b/(2*a));
    }
    else if(d>0)
    {
        cout<<"roots are real and unequal:"<<endl;
        cout<<((-b+sqrt(d))/(2*a));
        cout<<","<<((-b-sqrt(d))/(2*a));
    }
    else
    cout<<"roots are imaginary."<<endl;

    return 0;
}