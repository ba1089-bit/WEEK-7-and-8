#include <iostream>
using namespace std;

double calculateRounds(double a, double b, double c) {
    double perimeter = a + b + c;
    double distance = 5000;
    return distance / perimeter;
}

int main() {
    double side1, side2, side3;

    cout << "Enter side 1: ";
    cin >> side1;

    cout << "Enter side 2: ";
    cin >> side2;

    cout << "Enter side 3: ";
    cin >> side3;

    double rounds = calculateRounds(side1, side2, side3);

    cout << "Number of rounds needed: " << rounds << endl;

    return 0;
}