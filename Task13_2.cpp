#include <bits/stdc++.h>
using namespace std;
int main() {
int i = 0;
while (i < 10) {
i++;
if (i % 5 == 0) continue; // Skip multiples of 3
cout << "i = " << i << endl;
}
return 0;
}