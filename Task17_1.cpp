#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int *ptr=&num;
    cout<<"Adress of integar:"<<ptr<<endl;
    float n;
    float *fptr=&n;
    cout<<"Adress of float:"<<fptr<<endl;
    char a;
    char *cptr=&a;
    cout<<"Adress of charecter:"<< static_cast<void*>(cptr)<<endl;
    return 0;
}