#include <iostream>
using namespace std;

int main()
{
    int i,n=10,a[10],key;
    cout<<"enter a number:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter key:";
    cin>>key;
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            cout<<"key index is found at :"<<i<<endl;

            return 0;
        }
    }
    cout<<"not found";


return 0;
}