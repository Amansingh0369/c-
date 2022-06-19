#include <iostream>
using namespace std;

int main()
{
    int A[5]={1,2,3,4,5};
    int *p=A;

    cout<<*p<<','<<p<<endl;
    p++;
    cout<<*p<<","<<p<<endl;
    p--;
    cout<<*p<<","<<p<<endl;
    cout<<*(p+4)<<","<<p+4<<endl;
    for(int a=0;a<=3;a++)
    {
        cout<<"."<<endl;
    }

    for(int i=0;i<5;i++)
    {
        cout<<A[i]<<","<<p++<<endl;
    }
    int B[4]={10,11,12,13};
    int *b=B,*q=&B[2];
    cout<<q-b<<endl;
}