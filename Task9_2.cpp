 #include <iostream>

using namespace std;

int main() {
    double weight, distance;
    cout << "Enter the weight of the package in kilograms: ";
    cin >> weight;
    cout << "Enter the distance for shipping in kilometers: ";
    cin >> distance;
    double shippingCost;

    
    if (weight < 5) {
        shippingCost = 5.0; // Base cost for packages less than 5 kg
    } else if (weight >= 5 && weight < 20) {
        shippingCost = 10.0; // Base cost for packages between 5 kg and 20 kg
    } else {
        shippingCost = 20.0; // Base cost for packages more than 20 kg
    }

    // Add additional cost based on distance
    if (distance <= 100) {
        shippingCost += distance * 0.05; // Cost per km for distance up to 100 km
    } else {
        shippingCost += distance * 0.1; // Cost per km for distance over 100 km
    }

    // Print the total shipping cost
    cout << "The total shipping cost is: $" << shippingCost << endl;

    return 0;
}
