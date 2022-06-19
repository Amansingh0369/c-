#include <iostream>
using namespace std;

int main()
{
    int fact=1,n,i;
    cout<<"enter n:";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout<<"factorial of "<<n<<" no is "<<fact<<endl;

    return 0;
}