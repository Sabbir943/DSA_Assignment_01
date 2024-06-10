#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    double height;
    cout<<"Enter your age:";
    cin>>age;
    cout<<"Enter your height in centimeter:";
    cin>>height;
    const int min_age=12;
    const double min_height=150.78;
    if(age>=min_age&&height>=min_height)
    {
        cout<<"You are allowed!"<<endl;

    }
    else {
        cout<<"Sorry! you are not allowed!"<<endl;
    }
    return 0;

    
}