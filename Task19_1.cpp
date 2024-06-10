#include <iostream>
#include <string>
using namespace std;
void greet(string name, int age) {
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
}
int main() {
    string name;
    int age;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    greet(name, age);

    return 0;
}
