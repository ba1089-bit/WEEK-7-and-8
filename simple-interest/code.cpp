#include <iostream>
using namespace std;

double calculateSI(double p, double r, double t) {
    return (p * r * t) / 100;
}

int main() {
    double principal, rate, time;

    cout << "Enter Principal: ";
    cin >> principal;

    cout << "Enter Rate: ";
    cin >> rate;

    cout << "Enter Time: ";
    cin >> time;

    double si = calculateSI(principal, rate, time);

    cout << "The Simple Interest is " << si 
         << " for Principal " << principal 
         << ", Rate of Interest " << rate 
         << " and Time " << time << endl;

    return 0;
}