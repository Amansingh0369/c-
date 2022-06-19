#include <iostream>
using namespace std;

int main()
{
    int a[]={1,2,3,-4,-5};
    int max=INT_MIN;
    for (auto x:a)
    {
        if(x>max)
        
            max=x;
        
        cout<<"max is "<<max<<endl;
        
    }
    return 0;
}