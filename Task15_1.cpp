#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6};
    cout<<"Array printing:";
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Reverse array:";
    for(int i=5;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}