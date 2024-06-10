#include<bits/stdc++.h>
using namespace std;
struct Rectangle{
    double width;
    double height;
};
int main()
{
  Rectangle area;
  cout<<"Enter height and width:";
  cin>>area.height>>area.width;
  cout<<"Area of Rectangle:"<<area.height*area.width<<endl;
  return 0;
}