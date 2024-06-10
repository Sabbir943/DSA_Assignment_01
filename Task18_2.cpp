#include<iostream>
using namespace std;
double circle(double r)
{
    return 3.1416*r*r;
}
int main()
{
    double r=12.34;
    cout<<"The area of circle:"<<circle(r)<<endl;
    return 0;

}