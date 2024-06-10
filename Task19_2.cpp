#include<iostream>
using namespace std;
float area(float b,float h )
{
    return 0.5*b*h;
}
int main()
{
    float b=12,h=23;
    cout<<"Area of Triangle:"<<area(b,h)<<endl;
    return 0;
}