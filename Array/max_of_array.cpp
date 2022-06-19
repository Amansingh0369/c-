#include <iostream>
using namespace std;

int main()
{
    int arr[7]={1,2,3,4,100,6,7};
    int n=7,max;
    max=arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]>max) 
        {
        max=arr[i];
        }
    }
    cout<<"maximum:"<<max<<endl;
}
