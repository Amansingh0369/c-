#include <iostream>
#include <math.h>

int main()
{
    using namespace std;
    
    float a,b,c,r1,r2;
    cout<<"Enter the vale of a,b,c:";
    cin>>a>>b>>c;
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"Roots are:"<<r1<<","<<r2<<endl;
    
    return 0;
    
}
