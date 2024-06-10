#include <iostream>
using namespace std;
// Define the structure named Point
struct Point {
    int x;
    int y;
};
// Function to print the coordinates of a point
void printPoint(const Point& p) {
    cout << "Point coordinates: (" << p.x << ", " << p.y << ")" << endl;
}
int main() {
    // Create a point
    Point p1;
    p1.x = 10;
    p1.y = 20;
// Print the point
    printPoint(p1);
    return 0;
}
