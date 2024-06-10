#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 10; ++i) {
        if (i == 4 || i == 7) {
            continue; // Skip the current iteration if i is 4 or 7
        }
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
