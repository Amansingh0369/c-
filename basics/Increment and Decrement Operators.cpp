#include <iostream>
using namespace std;

int main()
{
    //postincrement
    int i=5,j;
    j=i++;
    cout<<j<<" "<<i<<endl;
     
    //preincrement
    int a=5,b;
    b=++a;
    cout<<b<<" "<<a<<endl;
    
    //postincrement
    int x=5,y;
    y=2*x++;
    cout<<y<<" "<<x<<endl;
    
    //preincrement
    int l=5,k;
    k=2*++x;
    cout<<k<<" "<<l<<endl;
    
    return 0;
    
}
