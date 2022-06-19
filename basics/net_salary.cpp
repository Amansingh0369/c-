#include <iostream>

using namespace std;

int main()
{
    float B_s,P_a,P_d,net_salary;
    cout<<"Enter Basic salary:"<<endl;
    cin>>B_s;
    cout<<"Enter %_of_allowances:"<<endl;
    cin>>P_a;
    cout<<"Enter %_of_deducation:"<<endl;
    cin>>P_d;
    
    net_salary=B_s+(B_s*P_a/100)-(B_s*P_d/100);
    
    cout<<"Net_salary:"<<net_salary<<endl;
}
