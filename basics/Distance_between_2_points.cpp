#include <iostream>
#include <math.h>
 int main()
{
     using namespace std;
     
     int x1,x2,y1,y2;
     float d;
     cout<<"Enter x1,x2:";
     cin>>x1>>x2;
     cout<<"Enter y1,y2:";
     cin>>y1>>y2;
     d=sqrt((x2-x1)*(x2-x1))-((y2-y1)*(y2-y1));
     cout<<"Distance_between_2_points_is:"<<d<<endl;
     
     return 0;
     
 }

