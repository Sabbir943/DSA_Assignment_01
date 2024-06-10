#include<iostream>
using namespace std;
int main()
{
    string colors[]={"red","green","blue"};
    cout<<"Before Modified:"<<endl;
    for(string color:colors)
    {
        cout<<color<<' ';
    }
    cout<<endl;
    cout<<"After Modified:"<<endl;
    colors[2]="Yellow";
    for(string color:colors)
    {
        cout<<color<<' ';
    }

}