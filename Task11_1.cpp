#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any positive Number:";
    cin>>n;
    if(n<0)
    {
        cout<<"Factorial is not define for negative number!"<<endl;
        return 1;
    }
    int fact=1;
    int i=n;
    while(i>1)
    {
        fact*=i;
        --i;
    }
    cout<<fact<<endl;

    
}