#include <iostream>
using namespace std;

void display()
{
    cout<<"Hello world  "<<endl;
}
int main()
{
    void(*fp)();
    fp=display;
    (*fp)();
}