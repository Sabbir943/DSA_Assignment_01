#include <iostream>
using namespace std;
int main() {
    int a = 10;
     a++;
    cout <<"post-increament: " << a++<< endl;
     a--;
    cout << "post-decreament: " << a-- << endl;
     ++a;
    cout << "pre-increament: " << ++a<< endl;
     --a;
    cout << "pre-decreament " << --a << endl;

    return 0;
}
