#include <iostream>
using namespace std;

int main()
{
    int a[10]={0,1,2,3,64,5,6,7,8,9,};
    int l=0,h=9,mid,key;
    cout<<"enter key:";
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
        if (key==a[mid])
        {
            cout<<"found at "<<mid;

            return 0;
        }
        else if(key<a[mid])
        
            h=mid-1;
        
        else
            l=mid+1;

        
    }
    cout<<"not found";

    return 0;

}