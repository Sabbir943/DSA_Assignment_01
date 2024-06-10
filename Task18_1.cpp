#include<iostream>
using namespace std;
int max(int x,int y)
{
    return (x>y)?x:y;
}
int main()
{
int a=10, b=20;
cout<<"The large number of "<<a<<" and "<<b<<" is :"<<max(a,b)<<endl;
return 0;
}