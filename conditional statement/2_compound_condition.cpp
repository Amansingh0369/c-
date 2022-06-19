#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter ur age..?";
    cin>>age;

    if (age<12 || age>50)
    {
        cout<<"eligiable";
    }
    else
    {
        cout<<"Not eligiable";
    }

    return 0;
    
}
