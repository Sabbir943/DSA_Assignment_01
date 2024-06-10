#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter two positive Number:";
    cin>>n1>>n2;
    while(n2!=0)
    {
        int rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    cout<<"The GCD is:"<<n1<<endl;
    return 0;
}